#include <cstdio> // <cstdio> is a library
#include <iostream>

//0703232
/*
int main() { //entry point - a function that executes when a user runs a program
	printf("Hello World"); // is in the cstdio library
	return 0; // exit code - an integer value that the opeating system uses to determine how well a program ran, and a zero (0) exit code means the program ran successfully. Having a return statement in main is optional; the exit code defaults to 0.
}
*/

int main() {
	int the_answer;
	the_answer = 23;
	int lucky_number = the_answer % 3;
	std::cout << the_answer << std::endl;
	std::cout << lucky_number << std::endl;
	std::cout << the_answer/lucky_number << std::endl;
}

// continue from p73 'conditional statements'