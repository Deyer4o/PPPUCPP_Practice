// Made by Deyan Mohamed
// This is Added so that you can easily keep track of every function being called by using "TRACE_FUNCTION;" from within any function.

#pragma once // Makes sure this is included only once
import std; // Gain access to the C++ standard library (Importing the iostream module for input and output operations)

#define TRACE_FUNCTION FunctionTracer tracer(__func__) // Macro to simplify usage of FunctionTracer

class FunctionTracer { // creating a FunctionTracer class
public: //public access specifier that allows the members of the class to be accessed from outside the class
	FunctionTracer(const char* funcName) : name(funcName) { // Constructor - inluding a funcName varriable for passing the function name
		std::cout << "Entering: " << name << "()\n" << std::endl; // Prints function name when object gets created
	}
	~FunctionTracer() { // Destructor
		std::cout << "\nExiting: " << name << "()" << std::endl; // Prints function name when object gets destroyed
	}
private: // private access specifier that allows the members of the class to be accessed only from within the class
	const char* name; // Declaring the variable "name"
};