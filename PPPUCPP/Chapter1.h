#pragma once

#include "AdditionalTools.h"


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