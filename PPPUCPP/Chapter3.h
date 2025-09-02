#pragma once

#include "AdditionalTools.h"


// Computation (Pages 51 to 82)
namespace Chapter3 {
	
	TRACE_NAMESPACE("Chapter3");

	// This prints the terms and their definitions of Lvalues and Rvalues
	// [Computation / 3.3 Expressions]
	// Page 55
	void p55_LvaluesAndRvalues() {
		TRACE_FUNCTION;

		std::cout << "Lvalues and Rvalues:" << std::endl
		<< "L-values are generally on the left of an equasion and are \"the box\" of what is to be used/stored" << std::endl
		<< " - e.g. in [int x = 8] x is an L-value" << std::endl
		<< "R-values are generally on the right of an equasion and are \"the value\" of what is to be used/stored - R-values are temporary." << std::endl
		<< " - e.g. in [int x = 8] 8 is an R-value" << std::endl
		<< std::endl
		<< std::endl
		<< "In the case of [int a, b = 0; a = 2; b = a;] - the \"b = a;\" part consists of 2 L-values (both a and b are L-values)"
		<< std::endl;
	}

	// This prints the terms and their definitions of Lvalues and Rvalues
	// [Computation / 3.3 Expressions]
	// Page 56 - not necessarily in the book - https://www.youtube.com/watch?v=fbYknr-HPYE

	int GetValue() { return 42; } // Function returning an R-value
	int& GetLValue() { static int x = 0; return x; } // Function returning an L-value reference
	void SetValue(int val) {}
	void SetValueLvalueRef(int& val) {}
	void SetValueConstLvalueRef(const int& val) {}
	void SetValueRvalueRef(int&& val) {}
	void SetValueConstRvalueRef(const int&& val) {}
	void SetValuePointer(int* val) {}
	void SetValueConstPointer(const int* val) {}
	void SetValueConstPointerToConst(const int* const val) {}
	void SetValueAuto(auto val) {}

	void p56_LvaluesAndRvalues() {
		TRACE_FUNCTION;

		int i = GetValue(); // GetValue() returns an R-value and is used to initialize the L-value i
		//GetValue() = 5; // Error: cannot assign to an R-value, unless the function returns an L-value reference using &
		GetLValue() = 5; // OK: GetLValue() returns an L-value reference, so we can assign to it

	}

	// An example of a constant expression
	// [Computation / 3.3.1 Expressions]
	// Page 57
	void p57_ConstExpression() {
		TRACE_FUNCTION;

		constexpr int max = 100;
		int n;
		std::cin >> n;

		constexpr int c1 = max + 7; // OK: max is constexpr, so c1 can be evaluated at compile time
		//constexpr int c2 = n + 7; // Error: n is not constexpr, so c2 cannot be evaluated at compile time
		
		// A constexpr is a constant expression that can be evaluated at COMPILE TIME only
	}

	// An example of a constant
	// [Computation / 3.3.1 Expressions]
	// Page 57
	void p57_Const() {
		TRACE_FUNCTION;
		const int max = 100; // max is a constant, but not a constant expression
		int n;
		std::cin >> n;
		const int c1 = max + 7; // OK: max is const, so c1 can be evaluated at runtime
		const int c2 = n + 7; // OK: n is not const, but c2 can be evaluated at runtime

		// A const is a constant that can be evaluated at RUNTIME
	}

	// Template functions
	// Not neccessarily in the book
	template<typename T, typename T2>
	T exp_maxx(T a, T2 b) {
		TRACE_FUNCTION;
		return (a > b) ? a : b; // Return the larger of a or b
	}

	// Function pointers
	// Not necessarily in the book
	void HelloWorld() {
		TRACE_FUNCTION;
		std::cout << "Hello, World!" << std::endl;
	}

	void exp_FunctionPointers() {
		TRACE_FUNCTION;
		
		void(*function)() = HelloWorld; // Function pointer to a function that takes no arguments and returns void

		//auto function = exp_HelloWorld; // without the parentheses,
		//we are not calling the function but we get a pointer to the function
		// (getting the memory address of the function)

		function();
		function();

	}

	void exp_FunctionPointers2() {
		TRACE_FUNCTION;

		typedef void(*HelloWorldFunction)(); // Define a type alias for a function pointer
		HelloWorldFunction function = HelloWorld; // Function pointer to a function that takes no arguments and returns void

		function();
	}

	// Lambda expressions
	// Not necessarily in the book
}