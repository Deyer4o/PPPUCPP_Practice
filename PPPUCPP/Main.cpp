// Made by Deyan Mohamed
// This is a project including all of the code snippets from "Programming Principles and Practice Using C++" by Bjarne Stroustrup
// Included with comments are also the relevant page numbers of the book

import std;						// Gain access to the C++ standard library (Importing the iostream module for input and output operations
#include "AdditionalTools.h"	// Adds the capability of using "TRACE_FUNCTION" to print the function name at the start and end of it being called.

// This is a dummy function to showcase the basic types in C++
void Basics() // not in the book 
{
	TRACE_FUNCTION;

	int i = 5;							// int is a whole number (-2,-1,0,1,2,3,4...)
	float f = 3.14;						// float is a floating point number (-0.3, 3.14, 1.0, 9.99...)
	double d = 543210.012345;			// double is a double precission floating point number
	char c = 'A';						// char is a single character (A, B, C, D, E...)
	std::string s = "this is a string"; // string is an array of characters
	bool b = true;						// bool is a boolean value (true or false)
	
}


// This prints "Hello World"
void printHelloWorld() // page 18 [1.2] [Hello World / The classic first program]
{
	TRACE_FUNCTION;
	
	std::cout << "Hello, World!" << std::endl;
	
	// The function is of type "void" and does not return a value
	// cout refers to a standard Character OUTput stream
	// Prints "Hello World" to the console, std::endl is the equivalent of "\n" (is a manipulator that adds a new line and flushes the output buffer)
	// std:: refers to the standard namespace
	// Adding the line "using namespace std;" at the top of the file would allow us to use cout instead of std::cout
	// "<<" is an output operator
}

// This prints all special characters
void printSpecialCharacters() // not in the book 
{
	TRACE_FUNCTION;

	std::string s1 = "\n";				// \n is a special character for a new line
	std::string s2 = "\t";				// \t is a special character for a tab
	std::string s3 = "\\";				// \\ is a special character for a backslash
	std::string s4 = "\"";				// \" is a special character for a double quote
	std::string s5 = "\a";				// \a is a special character for a bell
	std::string s6 = "\b";				// \b is a special character for a backspace
	std::string s7 = "\f";				// \f is a special character for a form feed
	std::string s8 = "\r";				// \r is a special character for a carriage return
	std::string s9 = "\v";				// \v is a special character for a vertical tab
	std::string s10 = "\0";				// \0 is a special character for a null terminator
	std::string s11 = "\x41";			// \x41 is a special character for a hexadecimal number
	std::string s12 = "\u0041";			// \u0041 is a special character for a unicode number
	std::string s13 = "\U00000041";		// \U00000041 is a special character for a unicode number

	// Printing the special characters:
	std::cout << "A new line(\\n):"					<<	"ABCD\nEFGH looks like this." << std::endl;
	std::cout << "A tab(\\t):"						<<	"ABCD\tEFGH looks like this." << std::endl;
	std::cout << "A bell(\\a):"						<<	"ABCD\aEFGH looks like this." << std::endl;
	std::cout << "A carrige return(\\r):"			<<	"ABCD\rEFGH looks like this." << std::endl;
	std::cout << "A backspace(\\b):"				<<	"ABCD\bEFGH looks like this." << std::endl;
	std::cout << "A form feed(\\f):"				<<	"ABCD\fEFGH looks like this." << std::endl;
	std::cout << "A vertical tab(\\v):"				<<	"ABCD\vEFGH looks like this." << std::endl;
	std::cout << "A null terminator(\\0):"			<<	"ABCD\0EFGH looks like this." << std::endl;
	std::cout << "A backslash(\\\\):"				<<	"ABCD\\EFGH looks like this." << std::endl;
	std::cout << "A double quote(\\\"): "			<<	"ABCD\"EFGH looks like this." << std::endl;
	std::cout << "A hexadecimal number(\\x41):"		<< "ABCD\x41 EFGH looks like this." << std::endl;
	std::cout << "A unicode number(\\u0041):"		<< "ABCD\u0041EFGH looks like this." << std::endl;
	std::cout << "A unicode number(\\U00000041):"	<< "ABCD\U00000041EFGH looks like this." << std::endl;
}

int main() // C++ programs start by executing the function main
{
	TRACE_FUNCTION;
	

	printHelloWorld();

	printSpecialCharacters();

	
	return 0; // Returns 0 on program exit
}