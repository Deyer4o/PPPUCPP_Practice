#pragma once

#include "AdditionalTools.h"


// Objects, Types and Values (Pages 29 to 50)
namespace Chapter2
{
	TRACE_NAMESPACE("Chapter2");

	// This asks for and prints the first name of the user
	// [Objects, Types and Values / Input]
	// Page 30
	void p30_ReadAndWriteFirstName()
	{
		TRACE_FUNCTION;

		std::cout << "Please enter your first name (followed by \"enter\"):\n"; // Prompt the user for their first name
		std::string first_name; // Declare a string variable to store the first name
		std::cin >> first_name; // Read characters into first_name (from the standard input)
		std::cout << "Hello, " << first_name << "!\n"; // Greet the user with their first name
	}

	// This asks for and prints the name and age of the user
	// [Objects, Types and Values / Input and type]
	// Page 33
	void p33_ReadNameAndAge()
	{
		TRACE_FUNCTION;

		using namespace std;
		cout << "Please enter your first name and age\n";
		string first_name = "???"; // string variable ("???" indicates "don’t know the name")
		int age = -1; // integer variable (-1 means "don’t know the age")
		cin >> first_name >> age; // read a string followed by an integer
		cout << "Hello, " << first_name << " (age " << age << ")\n";

	}

	// This asks for and prints the first name and last name of the user
	// [Objects, Types and Values / Input and type]
	// Page 33
	void p33_ReadFirstAndLastName()
	{
		TRACE_FUNCTION;

		using namespace std;
		cout << "Please enter your first and second names\n";
		string first_name = "???";
		string last_name = "???";
		cin >> first_name >> last_name; // read a string followed by an integer
		cout << "Hello, " << first_name << " " << last_name << "!\n";

	}


	// This asks for a user's birthday, calculates their age in months and prints it
	// [Objects, Types and Values / Input and type]
	// Page 34
	void p34_ReadMonthsOfAgeFromAge()
	{
		TRACE_FUNCTION;

		using namespace std;
		cout << "Please enter your age\n";
		double age = 0; // double variable to store the age
		cin >> age; // read a string followed by an integer
		cout << "Your age is " << age << " years, or " << age * 12 << " months" << "!\n";

	}


	// This asks for a user's birthday, calculates their age in years, months and days, and prints it
	// [Objects, Types and Values / Input and type]
	// Page 34 - an additional function, not in the book
	void p34_ReadAgeFromBirthday()
	{
		TRACE_FUNCTION;



		using namespace std;
		struct Date {
			int day, month, year;
		};

		Date birthday; // Declare a Date struct to store the birthday
		Date today; // Declare a Date struct to store today's date
		cout << "Please enter your birthday (dd mm yyyy):\n";
		cin >> birthday.day >> birthday.month >> birthday.year; // Read the birthday from the user

		auto now = chrono::system_clock::now();
		time_t currentTime = chrono::system_clock::to_time_t(now);
		//tm* current = localtime(&currentTime);
		tm current;
		localtime_s(&current, &currentTime);
		today = { current.tm_mday, current.tm_mon + 1, current.tm_year + 1900 };

		// Calculate differences
		int years = today.year - birthday.year;
		int months = today.month - birthday.month;
		int days = today.day - birthday.day;

		//////////////////////////////////////////////////////////////////////////////////////////////
		// AI-generated:
		// Adjust for negative days
		if (days < 0) {
			months--;
			// Approximate days in the previous month (rough, for simplicity)
			int daysInPrevMonth = 31; // Basic fallback
			if (birthday.month == 1) {
				birthday.month = 13; // Wrap around for January
				birthday.year--;
			}
			int prevMonth = birthday.month - 1;
			int prevYear = birthday.year;
			int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			if (prevMonth == 2 && (prevYear % 4 == 0 && (prevYear % 100 != 0 || prevYear % 400 == 0))) {
				daysInPrevMonth = 29; // Leap year
			}
			else {
				daysInPrevMonth = daysInMonth[prevMonth - 1];
			}
			days += daysInPrevMonth;
		}

		// Adjust for negative months
		if (months < 0) {
			years--;
			months += 12;
		}
		//////////////////////////////////////////////////////////////////////////////////////////////

		// Output the result
		cout << "Age: " << years << " years, " << months << " months, " << days << " days" << endl << endl;

		cout << "total months: \t" << (years * 12 + months) << " months" << endl;
		cout << "total days: \t" << (years * 365 + months * 30 + days) << " days" << endl; // Approximation, not accounting for leap years
		cout << "total hours: \t" << (years * 365 * 24 + months * 30 * 24 + days * 24) << " hours" << endl; // Approximation, not accounting for leap years
		cout << "total minutes: \t" << (years * 365 * 24 * 60 + months * 30 * 24 * 60 + days * 24 * 60) << " minutes" << endl; // Approximation, not accounting for leap years
		cout << "total seconds: \t" << (years * 365 * 24 * 60 * 60 + months * 30 * 24 * 60 * 60 + days * 24 * 60 * 60) << " seconds" << endl; // Approximation, not accounting for leap years
		return;
	}



	// This asks for a floating-point value and prints various calculations with it
	// [Objects, Types and Values / 2.4 Operations and operators]
	// Page 35
	void p35_OperatorsExercise()
	{
		TRACE_FUNCTION;
		using namespace std;

		cout << "Please enter a floating-point value: ";
		double n = 0;
		cin >> n;
		cout << "n == " << n
			<< "\nn+1 == " << n + 1
			<< "\nthree times n == " << 3 * n
			<< "\ntwice n == " << n + n
			<< "\nn squared == " << n * n
			<< "\nhalf of n == " << n / 2
			<< "\nsquare root of n == " << sqrt(n)
			<< '\n';

	}

	// This asks for an integer value and prints various calculations with it
	// [Objects, Types and Values / 2.4 Operations and operators]
	// Page 36
	void p36_TRYTHIS_INT_OperatorsExercise()
	{
		TRACE_FUNCTION;
		using namespace std;

		cout << "Please enter an integer value: ";
		int n = 0;
		cin >> n;
		cout << "n == " << n
			<< "\nn+1 == " << n + 1
			<< "\nthree times n == " << 3 * n
			<< "\ntwice n == " << n + n
			<< "\nn squared == " << n * n
			<< "\nhalf of n == " << n / 2
			<< "\nsquare root of n == " << sqrt(n)
			<< "\nmodulo(2) of n == " << n % 2
			<< "\nn/2 * 2 + n%2 == " << n / 2 * 2 + n % 2
			<< '\n';

	}

	// This asks for the first and second names of the user and prints a greeting
	// [Objects, Types and Values / 2.4 Operations and operators]
	// Page 36
	void p36_ReadFirstAndSecondName() // read first and second name
	{
		TRACE_FUNCTION;

		cout << "Please enter your first and second names\n";
		string first;
		string second;
		cin >> first >> second; // read two strings
		string name = first + ' ' + second; // concatenate strings
		cout << "Hello, " << name << '\n';
	}


	// This reads two names and compares them alphabetically
	// [Objects, Types and Values / 2.4 Operations and operators]
	// Page 36
	void p36_ReadAndCompareNames() // read and compare names
	{
		TRACE_FUNCTION;

		cout << "Please enter two names\n";
		string first;
		string second;
		cin >> first >> second; // read two strings
		if (first == second)
			cout << "that's the same name twice\n";
		if (first < second)
			cout << first << " is alphabetically before " << second << '\n';
		if (first > second)
			cout << first << " is alphabetically after " << second << '\n';
	}


	// This reads a stream of words and detects repeated words
	// [Objects, Types and Values / 2.5.1 An Example: detect repeated words]
	// Page 38
	void p38_DetectRepeatedWords()
	{
		TRACE_FUNCTION;

		string previous; // previous word; initialized to ""
		string current; // current word
		while (cin >> current) { // read a stream of words
			if (previous == current) // check if the word is the same as last
				cout << "repeated word: " << current << '\n';
			previous = current;
		}

		/*
		std::cin reads words one by one (split by whitespace) from the 
		line-buffered input after you press Enter. The while loop processes
		each word sequentially, potentially running multiple times per 
		Enter press, depending on how many words are in the input line.
		*/

	}


	// This reads a stream of words and detects repeated words with their count
	// [Objects, Types and Values / 2.5.3 An Example: find repeated words]
	// Page 40
	void p40_DetectRepeatedWordsWithCount()
	{
		TRACE_FUNCTION;

		int number_of_words = 0;
		string previous; // previous word; initialized to ""
		string current;
		while (cin >> current) {
			++number_of_words; // increase word count - composite assignment opperator
			if (previous == current)
				cout << "word number " << number_of_words << " repeated: " << current << '\n';
			previous = current;
		}
	}


	// 
	// [Objects, Types and Values / 2.6 Names]
	// Page 41
	void p41_TRYTHIS_Print()
	{
		TRACE_FUNCTION;
		
	/*
	int Main() //main
	{
	STRING s = "Hello, beautiful world! "; //string
	cOut << S << '\n';// cout, s
	}
	*/

		string s = "Hello, beautiful world! "; //string- not STRING
		cout << s << '\n';// cout - not cOut , s - not S


	}



	// This is a dummy function to showcase the basic types in C++
	// not necessarily in the book
	void Basics()
	{
		TRACE_FUNCTION;

		// Basics:
		// Fundamental Types
		int i = 5;                          // int is a whole number, range: -2,147,483,648 to 2,147,483,647 (32-bit), examples: -10, 0, 100
		short sh = 100;                     // short is a smaller whole number, range: -32,768 to 32,767 (16-bit), examples: -500, 0, 1000
		long l = 1234567890;                // long is a larger whole number, range: -2,147,483,648 to 2,147,483,647 (32-bit) or wider, examples: -1000000, 0, 2000000000
		long long ll = 123456789012345;     // long long is an even larger whole number, range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (64-bit), examples: -10^15, 0, 10^15
		unsigned int ui = 42;               // unsigned int is a non-negative whole number, range: 0 to 4,294,967,295 (32-bit), examples: 0, 100, 1000000
		unsigned short us = 200;            // unsigned short is a non-negative smaller whole number, range: 0 to 65,535 (16-bit), examples: 0, 500, 60000
		unsigned long ul = 4294967295;      // unsigned long is a non-negative larger whole number, range: 0 to 4,294,967,295 (32-bit) or wider, examples: 0, 1000000, 4000000000
		unsigned long long ull = 18446744073709551615; // unsigned long long is a non-negative very large whole number, range: 0 to 18,446,744,073,709,551,615 (64-bit), examples: 0, 10^18, 2^64-1
		float f = 3.14;                     // float is a floating-point number, range: ~±1.18e-38 to ±3.4e38 (32-bit IEEE 754), examples: -0.001, 3.14, 1000.5
		double d = 543210.012345;           // double is a double-precision floating-point number, range: ~±2.23e-308 to ±1.79e308 (64-bit IEEE 754), examples: -0.0001, 3.14159, 1e100
		long double ld = 3.14159265359;     // long double is a higher-precision floating-point number, range: platform-dependent (often same as double or wider), examples: 3.141592653589793, 1e400
		char c = 'A';                       // char is a single character, range: -128 to 127 or 0 to 255 (8-bit, signed or unsigned), examples: 'A', 'b', '9', '@'
		wchar_t wc = L'Z';                  // wchar_t is a wide character for extended character sets (e.g., Unicode), range: platform-dependent (often 16-bit or 32-bit), examples: L'A', L'Ω', L'😊'
		bool b = true;                      // bool is a boolean value, range: true or false, examples: true, false

		// Enumerations
		enum Color { Red, Green, Blue };    // enum defines a set of named integer constants, range: underlying integer type (often int), examples: Red (0), Green (1), Blue (2)
		Color col = Green;                  // enum variable, typically stores an integer value, examples: Red, Green, Blue
		enum class Status { Ok, Error };    // enum class is a scoped enumeration, safer and type-safe, range: underlying integer type (often int), examples: Status::Ok, Status::Error
		Status stat = Status::Ok;           // enum class requires scoped access, examples: Status::Ok, Status::Error

		// Pointers and References
		int* p = &i;                        // pointer to int, stores a memory address of an int, examples: address of an int variable, nullptr
		const int* cp = &i;                 // pointer to const int, cannot modify the pointed-to value, examples: address of a const int, nullptr
		int& r = i;                         // reference to int, an alias for an existing int variable, examples: alias for an int like i (5)
		const int& cr = i;                  // const reference to int, cannot modify the referenced value, examples: alias for a const int like i (5)
		// Smart Pointers
		std::unique_ptr<int> up = std::make_unique<int>(42); // unique_ptr manages a single-ownership resource, requires <memory>, examples: pointer to int (42), pointer to custom object
		std::shared_ptr<int> sp = std::make_shared<int>(42); // shared_ptr manages shared-ownership resource, requires <memory>, examples: shared pointer to int (42), shared pointer to custom object
		std::weak_ptr<int> wp = sp;         // weak_ptr references a shared_ptr without owning it, requires <memory>, examples: weak reference to a shared_ptr-managed int

		// Arrays and Standard Library Containers
		int arr[5] = { 1, 2, 3, 4, 5 };		// array is a fixed-size sequence of elements of the same type, examples: {0, 0, 0}, {10, 20, 30, 40, 50}
		std::string s = "this is a string";	// string is an array of characters, requires <string>, examples: "", "hello", "C++ is fun"
		std::vector<int> vec = { 1, 2, 3 };	// vector is a dynamic array, resizable, requires <vector>, examples: {}, {10}, {1, 2, 3, 4}
		std::array<int, 3> arr3 = { 1, 2, 3 };// array is a fixed-size array with additional features, requires <array>, examples: {0, 0, 0}, {5, 10, 15}
		std::list<int> lst = { 1, 2, 3 };	// list is a doubly-linked list, requires <list>, examples: {}, {10}, {1, 2, 3}
		std::deque<int> dq = { 1, 2, 3 };	// deque is a double-ended queue, requires <deque>, examples: {}, {10}, {1, 2, 3}
		std::queue<int> q;					// queue is a first-in, first-out (FIFO) container, requires <queue>, examples: empty queue, queue with {1, 2, 3}
		std::stack<int> stk;				// stack is a last-in, first-out (LIFO) container, requires <stack>, examples: empty stack, stack with {1, 2, 3}
		std::priority_queue<int> pq;		// priority_queue is a sorted queue, highest priority first, requires <queue>, examples: empty priority queue, queue with {10, 5, 15} (15 is top)
		std::set<int> st = { 1, 2, 3 };		// set is a sorted collection of unique elements, requires <set>, examples: {}, {10}, {1, 2, 3}
		std::map<std::string, int> mp = { {"key", 42} }; // map is a key-value pair collection, requires <map>, examples: {}, {{"a", 1}}, {{"x", 10}, {"y", 20}}
		std::unordered_set<int> uset = { 1, 2, 3 }; // unordered_set is an unsorted collection of unique elements, requires <unordered_set>, examples: {}, {10}, {1, 2, 3}
		std::unordered_map<std::string, int> umap = { {"key", 42} }; // unordered_map is an unsorted key-value pair collection, requires <unordered_map>, examples: {}, {{"a", 1}}, {{"x", 10}, {"y", 20}}

		// Other Standard Library Types
		std::pair<int, std::string> pr = { 1, "value" }; // pair stores two values of different types, requires <utility>, examples: {0, ""}, {10, "text"}
		std::tuple<int, double, std::string> tp = { 1, 3.14, "text" }; // tuple stores multiple values of different types, requires <tuple>, examples: {0, 0.0, ""}, {5, 2.718, "data"}
		std::optional<int> opt = 42;        // optional represents a value that may or may not exist, requires <optional>, C++17+, examples: std::nullopt, 0, 100
		std::variant<int, std::string> var = 42; // variant can hold one value from a set of types, requires <variant>, C++17+, examples: 0, "hello"
		std::any any_val = 42;              // any can hold a value of any type, requires <any>, C++17+, examples: 0, "text", 3.14

	}

	// This prints an explanation of literals in C++
	// not necessarily in the book
	void Literals()
	{
		TRACE_FUNCTION;

		// Literals are values with types defined by syntax
		"example";	// an example of a string literal
		42;			// an example of an integer literal
		3.14;		// an example of a floating-point literal

		std::cout << "Literals in C++: They’re values with types defined by syntax (e.g., 42 is int, 3.14 is double).\nThe value fits within the type but doesn’t define it." << std::endl;
	}

}
