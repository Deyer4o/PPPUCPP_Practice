#pragma once

bool ENABLE_TRACE_BOOL = false;
#define ENABLE_TRACE ENABLE_TRACE_BOOL = true; TRACE_FUNCTION; USING_S1_NAMESPACES;

#include "std_lib_facilities.h" // Support material for the book, includes common headers and utilities
#include <ctime> 				// For time measurement
import std;						// Gain access to the C++ standard library (Importing the iostream module for input and output operations
using namespace std;			// Allows us to use standard library features without the std:: prefix