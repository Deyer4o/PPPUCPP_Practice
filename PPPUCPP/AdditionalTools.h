// Made by Deyan Mohamed
// This is Added so that you can easily keep track of every function being called by using "TRACE_FUNCTION;" from within any function.

#pragma once // Makes sure this is included only once

#include "Includes.h"

bool ENABLE_TRACE_BOOL = false;
int level = 0; // Declaring the variable "level"
#define ENABLE_TRACE ENABLE_TRACE_BOOL = true; TRACE_FUNCTION; USING_S1_NAMESPACES;

//using namespace std; // This is bad practice in a header file. It is used here for simplicity.
const char* _curNamespace = "";

#define C(n) using namespace n;
#define USING_S1_NAMESPACES C(Chapter1); C(Chapter2); C(Chapter3); C(Chapter4); C(Chapter5); C(Chapter6); C(Chapter7); C(Chapter8); 


#ifdef ENABLE_TRACE // If TRACE is defined, include the FunctionTracer class
#define TRACE_FUNCTION FunctionTracer tracer(__func__, _curNamespace); // Macro to simplify usage of FunctionTracer
#define TRACE_NAMESPACE(ns) const char* _curNamespace = ns; // Set the current namespace to Chapter1
#else // If TRACE is not defined, do nothing
#define MAX_TRACE_LEVEL 0
#define TRACE_FUNCTION ; // Empty macro for FunctionTracer
#define TRACE_NAMESPACE(ns) ;// Empty macro for namespace
#endif // End of TRACE definition


#ifndef MAX_TRACE_LEVEL
#define MAX_TRACE_LEVEL 100 // Default max trace level if not defined
#endif

class FunctionTracer { // creating a FunctionTracer class
public: //public access specifier that allows the members of the class to be accessed from outside the class
	FunctionTracer(const char* funcName, const char* aNamespaceName) : name(funcName), namespaceName(aNamespaceName){ // Constructor - inluding a funcName varriable for passing the function name
		if (ENABLE_TRACE_BOOL && level < MAX_TRACE_LEVEL) {
			std::cout << "Entering: \t" << namespaceName;  // Prints function name when object gets created
			if (namespaceName != "") std::cout << "::";
			std::cout << name << "()\n" << std::endl;
		}
		level++;
	}
	~FunctionTracer() { // Destructor
		if (ENABLE_TRACE_BOOL && level <= MAX_TRACE_LEVEL) {
			std::cout << "\nExiting: \t" << namespaceName; // Prints function name when object gets destroyed
			if (namespaceName != "") std::cout << "::";
			std::cout << name << "()\n" << std::endl;
		}
		level--;
	}
private: // private access specifier that allows the members of the class to be accessed only from within the class
	const char* name; // Declaring the variable "name"
	const char* namespaceName; // Declaring the variable "namespace"
};