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
		std::cout << "Age: " << years << " years, " << months << " months, " << days << " days" << std::endl << std::endl;

		std::cout << "total months: \t" << (years * 12 + months) << " months" << std::endl;
		std::cout << "total days: \t" << (years * 365 + months * 30 + days) << " days" << std::endl; // Approximation, not accounting for leap years
		std::cout << "total hours: \t" << (years * 365 * 24 + months * 30 * 24 + days * 24) << " hours" << std::endl; // Approximation, not accounting for leap years
		std::cout << "total minutes: \t" << (years * 365 * 24 * 60 + months * 30 * 24 * 60 + days * 24 * 60) << " minutes" << endl; // Approximation, not accounting for leap years
		std::cout << "total seconds: \t" << (years * 365 * 24 * 60 * 60 + months * 30 * 24 * 60 * 60 + days * 24 * 60 * 60) << " seconds" << endl; // Approximation, not accounting for leap years
		return;
	}



	// This asks for a floating-point value and prints various calculations with it
	// [Objects, Types and Values / 2.4 Operations and operators]
	// Page 35
	void p35_OperatorsExercise()
	{
		TRACE_FUNCTION;
		using namespace std;

		std::cout << "Please enter a floating-point value: ";
		double n = 0;
		std::cin >> n;
		std::cout << "n == " << n
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

		std::cout << "Please enter an integer value: ";
		int n = 0;
		std::cin >> n;
		std::cout << "n == " << n
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

		std::cout << "Please enter your first and second names\n";
		std::string first;
		std::string second;
		std::cin >> first >> second; // read two strings
		std::string name = first + ' ' + second; // concatenate strings
		std::cout << "Hello, " << name << '\n';
	}


	// This reads two names and compares them alphabetically
	// [Objects, Types and Values / 2.4 Operations and operators]
	// Page 36
	void p36_ReadAndCompareNames() // read and compare names
	{
		TRACE_FUNCTION;

		std::cout << "Please enter two names\n";
		std::string first;
		std::string second;
		std::cin >> first >> second; // read two strings
		if (first == second)
			std::cout << "that's the same name twice\n";
		if (first < second)
			std::cout << first << " is alphabetically before " << second << '\n';
		if (first > second)
			std::cout << first << " is alphabetically after " << second << '\n';
	}


	// This reads a stream of words and detects repeated words
	// [Objects, Types and Values / 2.5.1 An Example: detect repeated words]
	// Page 38
	void p38_DetectRepeatedWords()
	{
		TRACE_FUNCTION;

		std::string previous; // previous word; initialized to ""
		std::string current; // current word
		while (std::cin >> current) { // read a stream of words
			if (previous == current) // check if the word is the same as last
				std::cout << "repeated word: " << current << '\n';
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
		std::string previous; // previous word; initialized to ""
		std::string current;
		while (std::cin >> current) {
			++number_of_words; // increase word count - composite assignment opperator
			if (previous == current)
				std::cout << "word number " << number_of_words << " repeated: " << current << '\n';
			previous = current;
		}
	}


	// This prints a string to the console
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

		std::string s = "Hello, beautiful world! "; //string- not STRING
		std::cout << s << '\n';// cout - not cOut , s - not S

	}
	

	// This is commented dummy code to showcase the use of uninitialized variables
	// [Objects, Types and Values / 2.8 Type Safety]
	// Page 44
	void p44_UninitializedVariable()
	{
		TRACE_FUNCTION;

		// Uninitialized variables can lead to undefined behavior in C++
		/*
		double x; // we "forgot" to initialize: the value of x is undefined
		double y = x; // the value of y is undefined
		double z = 2.0 + x; // the meaning of + and the value of z are undefined
		*/
	}


	// This showcases the use of conversions between types
	// [Objects, Types and Values / 2.9 Conversions]
	// Page 44
	void p44_Conversions()
	{
		TRACE_FUNCTION;

		char c = 'x';
		int i1 = c; // i1 gets the integer value of c
		int i2 = c + 1000; // i2 gets the integer value of c added to 1000
		double d = i2 + 7.3; // d gets the floating-point value of i2 plus 7.3

		std::cout << "c: " << c << ", i1: " << i1 << ", i2: " << i2 << ", d: " << d << '\n';

	}


	// This showcases narrowing conversions, which can lead to loss of data
	// [Objects, Types and Values / 2.9 Conversions]
	// Page 45
	void p45_NarrowingConversions()
	{
		TRACE_FUNCTION;

		double d = 0;
		while (std::cin >> d) { // repeat the statements below as long as we type in numbers
			int i = d; // try to squeeze a floating-point value into an integer value
			char c = i; // try to squeeze an integer into a char
			std::cout << "d==" << d // the original double
				<< " i==" << i // double converted to int
				<< " c==" << int(c) // int value of char
				<< " char(" << c << ")\n"; // the char
		}


		// If we really need narrowing we can use narrow<T>(x) 
		// and when we need rounding we can use round_to<int>(x)
		//narrow<int>(d);
		//round_to<int>(d);

	}


	// This showcases the initialization notation in C++ and the safeguards some compilers provide
	// [Objects, Types and Values / 2.9 Conversions]
	//Page 46
	void p46_InitializationNotation() 
	{
		TRACE_FUNCTION;

		int x0 = 7.8; // narrows, some compilers warn
		//int x1{ 7.8 }; // error: {} doesn’t narrow
		//int x2 = { 7.8 }; // error: ={} doesn’t narrow (the redundant = is allowed)
		int x3(7.8); // narrows, some compilers warn

		// We use {} for compile-time protection against narrowing

		int x = 7;
		double d = 7.7;
		std::string s = "Hello, World\n";
		std::vector v = { 1, 2, 3, 5, 8 }; // see §17.3
		std::pair p{ "Hello",17 }; // see §20.2.2

	}


	// This showcases the use of the auto keyword for type inference in C++
	// [Objects, Types and Values / 2.9 Conversions]
	//Page 47
	void p47_AutoType() 
	{
		TRACE_FUNCTION;

		auto x = 7; // x is an int (because 7 is)
		auto d = 7.7; // d is a double (because 7.7 is)

		/* ↑ Instead of:
		int x = 7;
		double d = 7.7;
		*/

		/*
		auto z = complex<double>{1.3,3.4};
		auto p = make_unique<Pair<string,int>>{"Harlem",10027}; // a unique_ptr<Pair<string,int>> (§18.5.2)
		auto b = lst.begin(); // lst.begin is a vector<int>::iterator (§19.3.2)

		*/
	}


	// Simple form letter
	// [Drill]
	// Page 47
	void p47_Drills_SimpleFormLetter()
	{
		TRACE_FUNCTION;

		std::string first_name, last_name, receiver_name, message, friend_name = "";
		int age_of_receiver = 0;

		std::cout << "Please enter your first name:\n";
		std::cin >> first_name;
		std::cout << "Please enter your last name:\n";
		std::cin >> last_name;
		std::cout << "Please enter the receiver's name:\n";
		std::cin >> receiver_name;
		std::cout << "Your common friend's name:\n";
		std::cin >> friend_name;
		std::cout << "Please enter the age of the receiver:\n";
		std::cin >> age_of_receiver;

		std::cout << "Please enter the message you want to send:\n";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::getline(std::cin, message);

		/*
		•	Use std::cin.ignore(...) after std::cin >> ...
		if you want to use std::getline next, to clear out the leftover newline.
		•	Otherwise, std::getline will just read an empty string.
		*/

		std::cout << "\nDear " << receiver_name << ",\n\n"
			<< "\tHow are you? I am fine. I miss you.\n"
			<< "I hear you just had a birthday and you are " << age_of_receiver << " years old.";

		if (age_of_receiver <=0 || age_of_receiver >=110) simple_error("you're kidding!");
		else if (age_of_receiver < 12) std::cout << " Next year you will be " << age_of_receiver + 1 << " years old! ";
		else if (age_of_receiver == 17) std::cout << " Next year you will be able to vote!";
		else if (age_of_receiver > 70) std::cout << " YAre you retired?";
		std::cout<< message << "\n\n"
			<< "Have you seen" << friend_name << "lately ? \n"
			<< "Yours sincerely,\n\n\n"
			<< first_name << " " << last_name << "\n";
		
	}


	// This is a review of the previous sections, asking questions and providing answers
	// [Review]
	// Page 48
	void p_48_Review()
	{
		TRACE_FUNCTION;
		std::cout << "This is a review of the previous sections.												   "

			<< "[1] What is meant by the term prompt ?													   "
			<< "\n\tA prompt is a message displayed to the user, asking for input or action.			   "

			<< "[2] Which operator do you use to read into a variable ?									   "
			<< "\n\tThe >> operator is used to read input into a variable.								   "
			
			<< "\n[3] What notations can you use to initialize an object ?								   "
			<< "\n\tYou can use the = operator, parentheses (), or curly braces {} to initialize an object."
			
			<< "\n[4] If you want the user to input an integer value into your program for a			   "
			<< "variable named number, what are two lines of code you could write to					   "
			<< "ask the user to do it and to input the value into your program ? "
			<< "\n\tYou could write:																	   "
			<< "\n\tcout << \"Please enter an integer value for number: \";								   "
			<< "\n\tcin >> number;																		   "
			
			<< "\n[5] What is \\n called and what purpose does it serve ?								   "
			<< "\n\tThe \\n is called an escape sequence and it serves to insert a newline character in the output. "
			
			<< "\n[6] What terminates input into a string ?												   "
			<< "\n\tInput into a string is terminated by whitespace (space, tab, newline) or the end of the input stream. "
			
			<< "\n[7] What terminates input into an integer ?											   "
			<< "\n\tInput into an integer is terminated by whitespace (space, tab, newline) or a non-numeric character. "
			
			<< "\n[8] How would you write the following as a single line of code :						   "
			<< "cout << \"Hello, \";																	   "
			<< "cout << first_name;																		   "
			<< "cout << \"!\\n\";																		   "
			<< "\n\tYou would write: cout << \"Hello, \" << first_name << \"!\\n\";						   "
			
			<< "\n[9] What is an object ?																   "
			<< "\n\tAn object is a region of storage in memory with a name and a type, which can hold data and has associated operations. "
			
			<< "\n[10] What is a literal ?																   "
			<< "\n\tA literal is a fixed value that is directly represented in the source code, such as numbers, characters, or strings. "
			
			<< "\n[11] What kinds of literals are there ?												   "
			<< "\n\tThere are integer literals (e.g., 42), floating-point literals (e.g., 3.14), character literals (e.g., 'A'),"
			<< "string literals(e.g., \"Hello\"), and boolean literals (true, false). "
			
			<< "\n[12] What is a variable ?																   "
			<< "\n\tA variable is a named storage location in memory that can hold a value and can be modified during program execution. "
			
			<< "\n[13] What are typical sizes for a char, an int, and a double ?						   "
			<< "\n\tTypical sizes are: char (1 byte - 8 bits), int (4 bytes - 32 bits on most systems), double (8 bytes - 64 bits on most systems). "
			
			<< "\n[14] What measures do we use for the size of small entities in memory, such as ints and strings ?	"
			<< "\n\t We make sure to not narrow the types, double-check if the narrowing is safe by using the narrow<T>(x)"
			<< "function, and use the round_to<int>(x) function for rounding. or we can use the sizeof operator to check the size of types. "
			
			<< "\n[15] What is the difference between = and == ?										   "
			<< "\n\tThe = operator is used for assignment, assigning a value to a variable, while the == operator is used for comparison, checking if two values are equal. "
			
			<< "\n[16] What is a definition ?															   "
			<< "\n\tA definition is a declaration that allocates storage for an object and initializes it. It provides the necessary information to create an object in memory. "
			
			<< "\n[17] What is an initialization and how does it differ from an assignment ?			   "
			<< "\n\tInitialization is the process of assigning a value to a variable at the time of its creation, while assignment is the process of changing the value of an already defined variable. "
			
			<< "\n[18] What is string concatenation and how do you make it work in C++ ?				   "
			<< "\n\tString concatenation is the process of joining two or more strings together. In C++, you can use the + operator to concatenate strings, like this: "
			<< "\n\tstring full_name = first_name + \" \" + last_name; // Concatenates first and last names with a space in between. "
			
			<< "\n[19] What operators can you apply to an int ?											   "
			<< "\n\tYou can apply arithmetic operators (+, -, *, /, %), comparison operators (==, !=, <, >, <=, >=), and bitwise operators (&, |, ^, ~, <<, >>) to an int. "
			
			<< "\n[20] Which of the following are legal names in C++ ? If a name is not legal, why not?	   "
			<< "\nThis_little_pig This_1_is fine 2_For_1_special latest thing							   "
			<< "\nGeorge@home _this_is_ok MineMineMine number											   "
			<< "\ncorrect ? stroustrup.com $PATH														   "
			<< "\n\tLegal names in C++ must start with a letter or underscore, followed by letters, digits, or underscores. "
			<< "Names cannot contain special characters like @, $, or spaces. "
			<< "Legal: This_little_pig, This_1_is_fine, _this_is_ok, MineMineMine, number, correct "
			<< "Illegal: 2_For_1_special (starts with a digit), latest thing (contains a space), George@home (contains @), $PATH (starts with $), stroustrup.com (contains .). "
			
			<< "\n[21] Give five examples of legal names that you shouldn’t use because they are likely to cause confusion.	"
			<< "\n\tYou shouldn’t use names starting with an underscore (_), names that are too similar to keywords (like int, float, etc.),"
			<< "names that are too generic(like data or info),"
			<< "names that are too long or complex, and names that are already used in the standard library or by other"
			<< "libraries.Examples: _temp, int, float, data, info. "
			
			<< "\n[22] What are some good rules for choosing names ?									   "
			<< "\n\tSome good rules for choosing names include: "
			<< "\n\t1. Use descriptive names that convey the purpose of the variable or function."
			<< "\n\t2. Use camelCase or snake_case for readability."
			<< "\n\t3. Avoid using single-letter names except for loop counters or temporary variables."
			<< "\n\t4. Avoid using names that are too similar to keywords or standard library names."
			<< "\n\t5. Keep names concise but meaningful, avoiding unnecessary abbreviations."
			<< "\n\t6. Use consistent naming conventions throughout your codebase."
			<< "\n\t7. Avoid using names that can be easily confused with other names, such as using 'l' (lowercase L) for a variable name, which can be confused with '1' (one)."
			
			<< "\n[23] What is type safety and why is it important ?									   "
			<< "\n\tType safety is the property of a programming language that ensures that operations on data are performed only on compatible types. "
			
			<< "\n[24] Why can conversion from double to int be a bad thing ?							   "
			<< "\n\tConversion from double to int can be a bad thing because it can lead to loss of precision "
			<< "and truncation of the decimal part, resulting in unexpected behavior or incorrect results. "
			<< "It leads to narrowing conversion, which leads to potential data loss. "
			
			<< "\n[25] Define a rule to help decide if a conversion from one type to another is	safe or unsafe."
			<< "\n\t A conversion is considered safe if it does not lead to narrowing, loss of precision, or unexpected behavior. "
			
			<< "\n[26] How can we avoid undesirable conversions ?										   "
			<< "\n\tWe can avoid undesirable conversions by using explicit type casting, using the narrow<T>(x) function for narrowing conversions, "
			<< "and using the round_to<int>(x) function for rounding. "

			<< "\n[27] What are the uses of auto ?														   "
			<< "\n\tThe auto keyword is used to automatically deduce the type of a variable based on its initializer. ";
			std::cout << "\n\nEnd of review.\n";
	}


	// This prints the terms and their definitions from the book
	// [Terms]
	// Page 49
	void p_49_Terms()
	{
		TRACE_FUNCTION;
		
		std::cout << "assignment" << " \t - To assign a value to a variable using the = operator.\n"
			<< "increment" << " \t - To increase the value of a variable by 1 using the ++ operator.\n"
			<< "type" << " \t - The classification of data that determines the kind of values a variable can hold, such as int, double, char, etc.\n"
			<< "declaration" << " \t - The statement that introduces a variable or function, specifying its name and type, but not necessarily allocating storage or initializing it.\n"
			<< "object" << " \t- An instance of a type that occupies storage in memory and can hold data, such as a variable or an array.\n"
			<< "int" << " \t - A fundamental data type in C++ representing integer values, typically 32 bits in size.\n"
			<< "==" << " \t - The equality operator used to compare two values for equality, returning true if they are equal and false otherwise.\n"
			<< "<" << " \t - The less-than operator used to compare two values, returning true if the left operand is less than the right operand.\n"
			<< "definition" << "\t - A statement that allocates storage for an object and initializes it, providing the necessary information to create an object in memory.\n"
			<< "operator" << " \t- A symbol that represents an operation to be performed on one or more operands, such as +, -, *, /, etc.\n"
			<< "conversion" << " \t- The process of changing a value from one type to another, such as converting a double to an int or a char to an int.\n"
			<< "narrowing" << " \t- A type conversion that can lead to loss of data or precision, such as converting a double to an int, which truncates the decimal part.\n"
			<< "varriable" << " \t- A named storage location in memory that can hold a value and can be modified during program execution.\n"
			<< "double" << " \t- A fundamental data type in C++ representing double-precision floating-point values, typically 64 bits in size.\n"
			<< "!=" << " \t- The not-equal operator used to compare two values for inequality, returning true if they are not equal and false otherwise.\n"
			<< "<=" << " \t- The less-than-or-equal-to operator used to compare two values, returning true if the left operand is less than or equal to the right operand.\n"
			<< "operation" << " \t- An action performed on one or more operands using an operator, such as addition, subtraction, multiplication, etc.\n"
			<< "concatenation" << " \t- The process of joining two or more strings together to form a single string, typically using the + operator in C++.\n"
			<< "name" << " \t- A label or identifier used to refer to a variable, function, or other entity in a program, allowing it to be accessed and manipulated.\n"
			<< "value" << " \t- The data stored in a variable or object, which can be of various types such as int, double, char, etc.\n"
			<< "widening" << " \t- A type conversion that does not lead to loss of data or precision, such as converting an int to a double, which preserves the integer value and adds decimal precision.\n"
			<< "string" << " \t- A sequence of characters used to represent text in C++, typically enclosed in double quotes, such as \"Hello, World!\".\n"
			<< "=" << " \t- The assignment operator used to assign a value to a variable, such as int x = 5;.\n"
			<< ">" << " \t- The greater-than operator used to compare two values, returning true if the left operand is greater than the right operand.\n"
			<< "cin" << " \t- The standard input stream in C++ used to read input from the user, typically using the >> operator, such as cin >> x;.\n"
			<< "initialization" << " \t- The process of assigning a value to a variable at the time of its creation, such as int x = 5;.\n"
			<< "type safety" << " \t- The property of a programming language that ensures that operations on data are performed only on compatible types, preventing type errors and ensuring correct behavior.\n"
			<< "decrement" << " \t- To decrease the value of a variable by 1 using the -- operator.\n"
			<< "auto" << " \t- A keyword in C++ that allows the compiler to automatically deduce the type of a variable based on its initializer, such as auto x = 5;.\n"
			<< "++" << " \t- The increment operator used to increase the value of a variable by 1, such as x++;.\n"
			<< ">=" << " \t- The greater-than-or-equal-to operator used to compare two values, returning true if the left operand is greater than or equal to the right operand.\n";
	}

	
	// [Exercises]
	// Page 49
	void p49_Exercise_1() {
		TRACE_FUNCTION;
		std::cout << "Check TRY_THIS functions above";
	}


	// This program converts between miles and kilometers based on user input
	// [Exercises]
	// Page 49
	void p49_Exercise_2() {
		TRACE_FUNCTION;

		std::cout << "Measurement conversion program\n"
			<< "Choose a conversion type:\n"
			<< "1. Miles to KM\n"
			<< "2. KM to Miles\n"
			<< "Enter your choice (1 or 2): ";

		int choice;
		std::cin >> choice;
		if (choice == 1) {
			double miles;
			std::cout << "Enter distance in miles: ";
			std::cin >> miles;
			double km = miles * 1.60934; // 1 mile = 1.60934 km
			std::cout << miles << " miles is equal to " << km << " kilometers.\n";
		}
		else if (choice == 2) {
			double km;
			std::cout << "Enter distance in kilometers: ";
			std::cin >> km;
			double miles = km / 1.60934; // 1 km = 0.621371 miles
			std::cout << km << " kilometers is equal to " << miles << " miles.\n";
		}
		else {
			std::cout << "Invalid choice. Please enter 1 or 2.\n";
		}
		
	}


	// This program demonstrates the use of legal and illegal variable names in C++
	// [Exercises]
	// Page 49
	void p49_Exercise_3() {
		TRACE_FUNCTION;
		
		int valid_variable = 0; // legal name
		// int 1st_variable = 0; // illegal name: starts with a digit
		int _valid_variable = 1; // legal name: starts with an underscore
		// int invalid-variable = 2; // illegal name: contains a hyphen
		int validVariable = 3; // legal name: camelCase
		// int double = 4; // illegal name: 'double' is a keyword
		std::cout << "Declared variables with legal names. Uncomment the illegal ones to see compiler errors.\n";
		std::cout << "Valid variable names: valid_variable, _valid_variable, validVariable\n";
		std::cout << "Illegal variable names: 1st_variable (starts with a digit), invalid-variable (contains a hyphen), double (keyword)\n";
	}


	// This program prompts the user to enter two integer values and outputs various calculations with them
	// [Exercises]
	// Page 49
	void p49_Exercise_4() {
		TRACE_FUNCTION;
			
		int val1, val2;
		std::cout << "Please enter two integer values:\n";
		std::cin >> val1 >> val2;
		int smaller = (val1 < val2) ? val1 : val2;
		int larger = (val1 > val2) ? val1 : val2;
		int sum = val1 + val2;
		int difference = abs(val1 - val2);
		int product = val1 * val2;
		int ratio = (val2 != 0) ? val1 / val2 : 0; // avoid division by zero
		std::cout << "Smaller: " << smaller << "\n"
			<< "Larger: " << larger << "\n"
			<< "Sum: " << sum << "\n"
			<< "Difference: " << difference << "\n"
			<< "Product: " << product << "\n"
			<< "Ratio (val1/val2): " << ratio << "\n";

		/*
		int smaller = (val1 < val2) ? val1 : val2;

		is the same as

		int smaller;
		if (val1 < val2) {
			smaller = val1;
		} else {
			smaller = val2;
		}

		*/

	}


	// This program prompts the user to enter two floating-point values and outputs various calculations with them
	// [Exercises]
	// Page 49
	void p49_Exercise_5() {
		TRACE_FUNCTION;

		double val1, val2;
		std::cout << "Please enter two floating-point values:\n";
		std::cin >> val1 >> val2;
		double smaller = (val1 < val2) ? val1 : val2;
		double larger = (val1 > val2) ? val1 : val2;
		double sum = val1 + val2;
		double difference = abs(val1 - val2);
		double product = val1 * val2;
		double ratio = (val2 != 0) ? val1 / val2 : 0; // avoid division by zero
		std::cout << "Smaller: " << smaller << "\n"
			<< "Larger: " << larger << "\n"
			<< "Sum: " << sum << "\n"
			<< "Difference: " << difference << "\n"
			<< "Product: " << product << "\n"
			<< "Ratio (val1/val2): " << ratio << "\n";

		/*
		int smaller = (val1 < val2) ? val1 : val2;

		is the same as

		int smaller;
		if (val1 < val2) {
			smaller = val1;
		} else {
			smaller = val2;
		}
		
		*/

	}


	// This program prompts the user to enter three integer values and outputs them in numerical sequence separated by commas
	// [Exercises]
	// Page 49
	void p49_Exercise_6() {
		TRACE_FUNCTION;
		

		int a, b, c;
		std::cout << "Please enter three integer values:\n";
		std::cin >> a >> b >> c;
		// Sort the values
		if (a > b) std::swap(a, b);
		if (a > c) std::swap(a, c);
		if (b > c) std::swap(b, c);
		std::cout << "Sorted values: " << a << ", " << b << ", " << c << "\n";

		/*
		swap(a, b);

		is the same as
		
		if (a > b) {
		int temp = a;
		a = b;
		b = temp;
		}

		*/
	}


	// This program prompts the user to enter three string values and outputs them in alphabetical order
	// [Exercises]
	// Page 49
	void p49_Exercise_7() {
		TRACE_FUNCTION;
		
		std::string a, b, c;
		std::cout << "Please enter three string values:\n";
		std::cin >> a >> b >> c;
		// Sort the values
		if (a > b) swap(a, b);
		if (a > c) swap(a, c);
		if (b > c) swap(b, c);
		std::cout << "Sorted values: " << a << ", " << b << ", " << c << "\n";
		
	}


	// This program checks if a given integer is even or odd
	// [Exercises]
	// Page 49
	void p49_Exercise_8() {
		TRACE_FUNCTION;

		int number;
		std::cout << "Please enter an integer value:\n";
		std::cin >> number;
		if (number % 2 == 0) {
			std::cout << "The value " << number << " is an even number.\n";
		}
		else {
			std::cout << "The value " << number << " is an odd number.\n";
		}

	}


	// This program converts a spelled-out number (zero to four) into its numeric representation
	//[Exercises]
	// Page 49
	void p49_Exercise_9() {
		TRACE_FUNCTION;

		std::string input;
		std::cout << "Please enter a spelled-out number (zero, one, two, three, four):\n";
		std::cin >> input;
		if (input == "zero") {
			std::cout << "0\n";
		}
		else if (input == "one") {
			std::cout << "1\n";
		}
		else if (input == "two") {
			std::cout << "2\n";
		}
		else if (input == "three") {
			std::cout << "3\n";
		}
		else if (input == "four") {
			std::cout << "4\n";
		}
		else {
			std::cout << "Not a number I know!\n";
		}
	}


	// This program performs basic arithmetic operations based on user input
	// [Exercises]
	// Page 49
	void p49_Exercise_10() {
		TRACE_FUNCTION;
		
		double operand1, operand2;
		std::string operation;
		std::cout << "Please enter an operation followed by two operands (e.g., + 100 3.14):\n";
		std::cin >> operation >> operand1 >> operand2;
		if (operation == "+" || operation == "plus") {
			std::cout << "Result: " << (operand1 + operand2) << "\n";
		}
		else if (operation == "-" || operation == "minus") {
			std::cout << "Result: " << (operand1 - operand2) << "\n";
		}
		else if (operation == "*" || operation == "mul") {
			std::cout << "Result: " << (operand1 * operand2) << "\n";
		}
		else if (operation == "/" || operation == "div") {
			if (operand2 != 0) {
				std::cout << "Result: " << (operand1 / operand2) << "\n";
			}
			else {
				std::cout << "Error: Division by zero is not allowed.\n";
			}
		}
		else {
			std::cout << "Unknown operation!\n";
		}


	}



	// [Exercises]
	// Page 50
	void p50_Exercise_11() {
		TRACE_FUNCTION;
		
		
		int pennies, nickels, dimes, quarters, half_dollars, one_dollar_coins;
		std::cout << "Please enter the number of coins you have:\n";
		std::cout << "Pennies: ";
		std::cin >> pennies;
		std::cout << "Nickels: ";
		std::cin >> nickels;
		std::cout << "Dimes: ";
		std::cin >> dimes;
		std::cout << "Quarters: ";
		std::cin >> quarters;
		std::cout << "Half Dollars: ";
		std::cin >> half_dollars;
		std::cout << "One Dollar Coins: ";
		std::cin >> one_dollar_coins;
		int total_cents = pennies + 5 * nickels + 10 * dimes + 25 * quarters + 50 * half_dollars + 100 * one_dollar_coins;
		double total_dollars = total_cents / 100.0;
		std::cout << "You have " << pennies << " penny" << (pennies != 1 ? "s" : "") << ".\n"
			<< "You have " << nickels << " nickel" << (nickels != 1 ? "s" : "") << ".\n"
			<< "You have " << dimes << " dime" << (dimes != 1 ? "s" : "") << ".\n"
			<< "You have " << quarters << " quarter" << (quarters != 1 ? "s" : "") << ".\n"
			<< "You have " << half_dollars << " half dollar" << (half_dollars != 1 ? "s" : "") << ".\n"
			<< "You have " << one_dollar_coins << " one dollar coin" << (one_dollar_coins != 1 ? "s" : "") << ".\n"
			<< "The value of all of your coins is " << total_cents << " cents or $"
			<< std::fixed << std::setprecision(2) << total_dollars << ".\n";

		/*
		fixed: Formats floating-point numbers in fixed-point notation with a set number of decimal places.
		setprecision(2): Sets the output to display two digits after the decimal point for floating-point numbers.

		Once set, fixed remains active for all subsequent floating-point outputs on the stream until another format (like scientific or defaultfloat) is applied.

		*/

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
		float f = 3.14f;                     // float is a floating-point number, range: ~±1.18e-38 to ±3.4e38 (32-bit IEEE 754), examples: -0.001, 3.14, 1000.5
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
