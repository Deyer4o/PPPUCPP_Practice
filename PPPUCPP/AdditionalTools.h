// Made by Deyan Mohamed
// This is Added so that you can easily keep track of every function being called by using "TRACE_FUNCTION;" from within any function.

#pragma once // Makes sure this is included only once
import std; // Gain access to the C++ standard library (Importing the iostream module for input and output operations)
#include "Includes.h"

const char* _curNamespace = "";

#define C(n) using namespace n;
#define USING_S1_NAMESPACES C(Chapter1); C(Chapter2); C(Chapter3); C(Chapter4); C(Chapter5); C(Chapter6); C(Chapter7); C(Chapter8); 

#ifdef ENABLE_TRACE // If TRACE is defined, include the FunctionTracer class
#define TRACE_FUNCTION FunctionTracer tracer(__func__, _curNamespace); // Macro to simplify usage of FunctionTracer
#define TRACE_NAMESPACE(ns) const char* _curNamespace = ns; // Set the current namespace to Chapter1
#else // If TRACE is not defined, do nothing
#define TRACE_FUNCTION ; // Empty macro for FunctionTracer
#define TRACE_NAMESPACE(ns) // Empty macro for namespace
#endif // End of TRACE definition

class FunctionTracer { // creating a FunctionTracer class
public: //public access specifier that allows the members of the class to be accessed from outside the class
	FunctionTracer(const char* funcName, const char* aNamespaceName) : name(funcName), namespaceName(aNamespaceName){ // Constructor - inluding a funcName varriable for passing the function name
		if (ENABLE_TRACE_BOOL) {
			std::cout << "Entering: \t" << namespaceName;  // Prints function name when object gets created
			if (namespaceName != "") std::cout << "::";
			std::cout << name << "()\n" << std::endl;
		}
	}
	~FunctionTracer() { // Destructor
		if (ENABLE_TRACE_BOOL) {
			std::cout << "\nExiting: \t" << namespaceName; // Prints function name when object gets destroyed
			if (namespaceName != "") std::cout << "::";
			std::cout << name << "()\n" << std::endl;
		}
	}
private: // private access specifier that allows the members of the class to be accessed only from within the class
	const char* name; // Declaring the variable "name"
	const char* namespaceName; // Declaring the variable "namespace"
};