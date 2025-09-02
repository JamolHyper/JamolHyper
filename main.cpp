/*
Jamol Shoymurzayev 220073
Monday 14:00
*/

// 1. Main Function
#include <iostream>
// The main function is the entry point of a C++ program.
// Its signature for handling command-line arguments is:
// int main(int argc, char* argv[])
// Java’s equivalent is: public static void main(String[] args)
int main(int argc, char* argv[]) {
std::cout << "Number of arguments received: " << argc << std::endl;
std::cout << "Arguments are:" << std::endl;
for (int i = 0; i < argc; ++i) {
// argv[0] is always the name of the program itself
    std::cout << "Argument " << i << ": " << argv[i] << std::endl;
}
// A return value of 0 typically indicates successful execution
return 0;
}

/* Question 2
The main function is the program’s entry point. 
In Java, it’s static so the JVM can call it without creating an object.
*/

/* Question 3
C++ main returns int and takes (int argc, char* argv[]) with no access modifier;
Java main returns void, takes (String[] args), and must be public static.
*/

/* Question 4
In C++, main’s integer return value signals exit status (0 = success, non-zero = error). 
In Java, exit codes are given via System.exit(int).
*/