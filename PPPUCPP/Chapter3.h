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

		cout << "Lvalues and Rvalues:" << endl
		<< "L-values are generally on the left of an equasion and are \"the box\" of what is to be used/stored" << endl
		<< " - e.g. in [int x = 8] x is an L-value" << endl
		<< "R-values are generally on the right of an equasion and are \"the value\" of what is to be used/stored - R-values are temporary." << endl
			<< " - e.g. in [int x = 8] 8 is an R-value" << endl
		<< endl
		<< endl
		<< "In the case of [int a, b = 0; a = 2; b = a;] - the \"b = a;\" part consists of 2 L-values (both a and b are L-values)"
		<< endl;
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

}