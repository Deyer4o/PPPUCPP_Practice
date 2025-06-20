// Made by Deyan Mohamed
// This is a project including all of the code snippets from "Programming Principles and Practice Using C++" by Bjarne Stroustrup (Third edition)
// Included with comments are also the relevant page numbers of the book
#define ENABLE_TRACE

import std;						// Gain access to the C++ standard library (Importing the iostream module for input and output operations
#include "AdditionalTools.h"	// Adds the capability of using "TRACE_FUNCTION" to print the function name at the start and end of it being called.
//#include <chrono> 				// For time measurement
#include <ctime> 				// For time measurement

// Hello, World! (Pages 17 to 28)
namespace Chapter1
{
	TRACE_NAMESPACE("Chapter1");

	// This prints "Hello World"
	// [Hello World / The classic first program]
	// Page 18, 25, 26 Drills 1-5
	void p18_printHelloWorld()
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

	// This prints "Hello, programming!\nHere we go!"
	// [Hello World / Exercises]
	// Page 27 Exercise 1
	void p27_printHelloProgramming()
	{
		TRACE_FUNCTION;
		std::cout << "Hello, programming!\nHere we go!" << std::endl;
	}

	// this prints all review questions and their answers
	// [Hello World / Review]
	// Page 26
	void p26_Review()
	{
		TRACE_FUNCTION;
		std::cout << "[1] What is the purpose of the “Hello, World!” program ?" << std::endl;
		std::cout << "To print “Hello, World!” to the console, using the Character OUTput function of the standard library." << std::endl;
		std::cout << "[2] Name the four parts of a function." << std::endl;
		std::cout << "Return type, name, parameters, code block “{ }”(function body)" << std::endl;
		std::cout << "[3] Name a function that must appear in every C++ program." << std::endl;
		std::cout << "Main" << std::endl;
		std::cout << "[4] In the “Hello, World!” program, what is the purpose of the line return 0; ?" << std::endl;
		std::cout << "To indicate that the program has succeeded(terminated successfully)" << std::endl;
		std::cout << "[5] What is the purpose of the compiler ?" << std::endl;
		std::cout << "To translate the human - written C++ code into machine code(platform specific object files)" << std::endl;
		std::cout << "[6] What is the purpose of the import statement ?" << std::endl;
		std::cout << "It imports the named module, an old - style alternative is #include" << std::endl;
		std::cout << "[7] What is the purpose of the #include directive ?" << std::endl;
		std::cout << "Including other files or libraries to access them from the current file" << std::endl;
		std::cout << "[8] What does a.cpp suffix at the end of a file name signify in C++ ?" << std::endl;
		std::cout << "Source C++ (source code) file" << std::endl;
		std::cout << "[9] What does the linker do for your program ?" << std::endl;
		std::cout << "It links the compiled objects together into a platform - specific executable(e.g..exe on Windows)" << std::endl;
		std::cout << "[10] What is the difference between a source file and an object file ?" << std::endl;
		std::cout << "A source file contains the human - written source code, an object file contains the compiled machine code that is derived from the source code." << std::endl;
		std::cout << "[11] What is an executable ?" << std::endl;
		std::cout << "A packaged(compiled and linked) machine code understood by the computer, platform - specific." << std::endl;
		std::cout << "[12] What is an IDE and what does it do for you ?" << std::endl;
		std::cout << "Integrated Development Environment - it helps you to write the source code of your programs by color coding different sections, giving you lots of tools and replacing the need for you to specifically type in the console when you want to compile, link and /or run the program." << std::endl;
		std::cout << "[13] How do you get a compiled program to run ?" << std::endl;
		std::cout << "By running the executable file(.exe on Windows)" << std::endl;
		std::cout << "[14] What is a comment ?" << std::endl;
		std::cout << "// this is a comment. It is ignored by the compiler, solely written for programmers (Mostly You, but also other programmers)" << std::endl;
		std::cout << "[15] What is the purpose of a drill ?" << std::endl;
		std::cout << "Making sure you understand a given lesson / discussed topic by repeating it / practicing it" << std::endl;
		std::cout << "[16] If you understand everything in the textbook, why is it necessary to practice ?" << std::endl;
		std::cout << "Practice makes perfect, you never truly understand something unless you try it.No musician have ever mastered their instrument by solely reading books." << std::endl;

	}

	// This prints each term mentoned in the chapter's TERM section and their definition
	// [HelloWorld / Terms]
	// Page 28 Exercise 5
	void p28_Terms()
	{
		TRACE_FUNCTION;
		std::cout << "//		- double slash for a comment" << std::endl;
		std::cout << "Executable	- the runnable platform - specific file that is produced by compiling and linking the source code of a program" << std::endl;
		std::cout << "main()		- every c++ program’s entry point function" << std::endl;
		std::cout << "<<		- operator for “putting in” for example used in std::cout << “example”; for outputting the string “example”" << std::endl;
		std::cout << "Function	- a declared code snipped that includes a return type, a name, a list of passed properties and a body(code block), containing the logic" << std::endl;
		std::cout << "object code	- compiled code" << std::endl;
		std::cout << "C++		- a low level programming language" << std::endl;
		std::cout << "header file	- similar to a “.cpp” and often accompanying it it is a file containing declarations of functions.Could be a header - source pair of declaration and definition or an all - in - one “header” library…" << std::endl;
		std::cout << "output		- the return of a function, what the function spits" << std::endl;
		std::cout << "comment		- // this is a comment, written by humans for humans, ignored by the compiler" << std::endl;
		std::cout << "IDE		- Integrated Development Environment like MS Visual Studio" << std::endl;
		std::cout << "Program		- a sequence of logic statements written by a programmer, compiled and linked into an executable file." << std::endl;
		std::cout << "Compiler	- a translator that converts C++ human - written code into an object(machine readable) code" << std::endl;
		std::cout << "import		- import is a relatively new word that stands for importing a module, its predecessor was the “#include”" << std::endl;
		std::cout << "source code	- .cpp, the logic that the developer(programmer) writes" << std::endl;
		std::cout << "Compile time	- during the compilation of the program" << std::endl;
		std::cout << "error		- an exception / out of expected behaviour, it occurs when the compiler, linker or even the program itself has some sort of a critical unexpected behavior" << std::endl;
		std::cout << "library		- a list of functions written by someone else that is usable by including it into the project with either “#include” or “import”" << std::endl;
		std::cout << "statement	- single line / code logic written in the source code.E.g.“int a = 3;”" << std::endl;
		std::cout << "Cout		- Character OUTput" << std::endl;
		std::cout << "linker		- links the compiled object code files" << std::endl;
		std::cout << "module		- a library / an external package to be imported and used within a program" << std::endl;
		std::cout << "#include	- a reserved word for including files and libraries to the project" << std::endl;
		std::cout << "Std		- standard library" << std::endl;
		std::cout << "command line	- cmd, a terminal for interacting with the system, everything else runs on it but just includes GUI for making things easier and fancy" << std::endl;
		std::cout << "bug		- a general unexpected behavior or error within a program" << std::endl;
		std::cout << "Debugging	- the process of trying to remove bugs from a program" << std::endl;

	}

	// This prints "Hello, programming!\nHere we go!"
	// [Hello World / Exercises]
	// Page 27 Exercise 1
	void p_27Exercise1()
	{
		TRACE_FUNCTION;
		p27_printHelloProgramming();
	}

	// This prints a series of instructions to get to the bathroom
	// [Hello World / Exercises]
	// Page 27 Exercise 2
	void p27_Exercise2()
	{
		TRACE_FUNCTION;
		std::cout << "Stand - up," << std::endl;
		std::cout << "Rotate towards the door," << std::endl;
		std::cout << "Walk towards the door," << std::endl;
		std::cout << "Extend your arm towards the handle," << std::endl;
		std::cout << "grab and rotate the handle," << std::endl;
		std::cout << "while doing that also pull the door towards you," << std::endl;
		std::cout << "step aside," << std::endl;
		std::cout << "walk through the opening in the door," << std::endl;
		std::cout << "turn left," << std::endl;
		std::cout << "walk towards the stairs," << std::endl;
		std::cout << "repeatedly extend and contract your left and right legs - pushing your body upwards in order to use the stairs to get to the upper floor," << std::endl;
		std::cout << "when at the top - rotate towards the door on your left," << std::endl;
		std::cout << "walk that direction," << std::endl;
		std::cout << "do the same process as with the prior door," << std::endl;
		std::cout << "you have reached the bathroom." << std::endl;
	}

	// This prints a series of instructions to get to the school
	// [Hello World / Exercises]
	// Page 27 Exercise 3
	void p27_Exercise3()
	{
		TRACE_FUNCTION;
		std::cout << "Go down the stairs," << std::endl;
		std::cout << "walk towards and pass the three newer," << std::endl;
		std::cout << "modern - looking buildings," << std::endl;
		std::cout << "following the same general direction use the small bridge nearby to cross the canal," << std::endl;
		std::cout << "turn left at the intersection and continue into the small park," << std::endl;
		std::cout << "still walking in the same general direction," << std::endl;
		std::cout << "you can use the big wooden bridge to cross yet another canal," << std::endl;
		std::cout << "at the corner of the park you need to go straight and from then on just follow the road and the school building is already visible.Follow the road and cross at the intersection.Go to the main entrance," << std::endl;
		std::cout << "go left and take the stairs all the way to the top floor(3rd floor)," << std::endl;
		std::cout << "when at the top take the corridor on your right," << std::endl;
		std::cout << "then continue until you see a big TV screen and 2 big conference looking rooms," << std::endl;
		std::cout << "the one on the right is where I am most of the time." << std::endl;
	}
	
	// This prints a series of instructions to make a muffin
	// [HelloWorld / Exercises]
	// Page 27 Exercise 4
	void p27_Exercise4()
	{
		TRACE_FUNCTION;
		std::cout << "Go to the store and buy muffins - done :D" << std::endl;
	}

	// This prints each term mentoned in the chapter's TERM section and their definition
	// [HelloWorld / Exercises]
	// Page 28 Exercise 5
	void p28_Exercise5()
	{
		TRACE_FUNCTION;
		p28_Terms();
	}

	// This prints all special characters
	// // not necessarily in the book
	void printSpecialCharacters()
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
		std::cout << "A new line(\\n):" << "ABCD\nEFGH looks like this." << std::endl;
		std::cout << "A tab(\\t):" << "ABCD\tEFGH looks like this." << std::endl;
		std::cout << "A bell(\\a):" << "ABCD\aEFGH looks like this." << std::endl;
		std::cout << "A carrige return(\\r):" << "ABCD\rEFGH looks like this." << std::endl;
		std::cout << "A backspace(\\b):" << "ABCD\bEFGH looks like this." << std::endl;
		std::cout << "A form feed(\\f):" << "ABCD\fEFGH looks like this." << std::endl;
		std::cout << "A vertical tab(\\v):" << "ABCD\vEFGH looks like this." << std::endl;
		std::cout << "A null terminator(\\0):" << "ABCD\0EFGH looks like this." << std::endl;
		std::cout << "A backslash(\\\\):" << "ABCD\\EFGH looks like this." << std::endl;
		std::cout << "A double quote(\\\"): " << "ABCD\"EFGH looks like this." << std::endl;
		std::cout << "A hexadecimal number(\\x41):" << "ABCD\x41 EFGH looks like this." << std::endl;
		std::cout << "A unicode number(\\u0041):" << "ABCD\u0041EFGH looks like this." << std::endl;
		std::cout << "A unicode number(\\U00000041):" << "ABCD\U00000041EFGH looks like this." << std::endl;
	}

}

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
		cout << "Your age is " << age << " years, or " << age*12 << " months"<< "!\n";

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

// Computation (Pages 51 to 82)
namespace Chapter3 {

	TRACE_NAMESPACE("Chapter3");

}

// Errors! (Pages 83 to 114)
namespace Chapter4 {

	TRACE_NAMESPACE("Chapter4");

}

// Writing a Program (Pages 115 to 150)
namespace Chapter5 {

	TRACE_NAMESPACE("Chapter5");

}

// Completing a Program (Pages 151 to 178)
namespace Chapter6 {

	TRACE_NAMESPACE("Chapter6");

}

// Technicalities: Functions, etc. (Pages 179 to 220)
namespace Chapter7 {

	TRACE_NAMESPACE("Chapter7");

}

// Technicalities: Classes, etc. (Pages 221 to 248)
namespace Chapter8 {

	TRACE_NAMESPACE("Chapter8");

}

// C++ programs start by executing the function main
int main() 
{
	TRACE_FUNCTION;

	Chapter2::p30_ReadAndWriteFirstName();
	
	return 0; // Returns 0 on program exit
}