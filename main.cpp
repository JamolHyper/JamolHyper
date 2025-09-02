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

// 2. Variables

#include <iostream>
int main() {
int a = 10;
int b = 20;

std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

 // Swapping using arithmetic operations. This logic works in both C++ and Java.
a = a + b; // a becomes 30
b = a- b; // b becomes 10 (30-20)
a = a- b; // a becomes 20 (30-10)

std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

return 0;
}

/* Question 2
Primitive types store actual values directly in memory (stack),
while reference types store memory addresses pointing to objects (heap).
*/

/* Question 3
Scope defines where a variable is accessible; local scope exists only inside 
a function/method, while class/static scope is tied to the class and accessible 
across methods.
*/

/* Question 4
Statically-typed means variable types are fixed at compile-time like in C++/Java, 
unlike dynamic typing like Python/JavaScript where types are checked at runtime.
*/


// 3. Control Flow
#include <iostream>
int main() {
int n1 = 0, n2 = 1, nextTerm = 0;
std::cout << "First 10 Fibonacci numbers: ";
for (int i = 1; i <= 10; ++i) {
if(i == 1) {
std::cout << n1 << " ";
continue;
}
if(i == 2) {
std::cout << n2 << " ";
continue;
}
nextTerm = n1 + n2;
n1 = n2;
n2 = nextTerm;
std::cout << nextTerm << " ";
}
std::cout << std::endl;
return 0;
}

/* Question 2
A while loop checks the condition before executing, while a do-while loop executes once before checking. 
Use do-while when at least one execution is guaranteed.
*/

/* Question 3
A switch statement selects execution paths based on a variable’s value; case defines options, 
break prevents fall-through, and default handles unmatched values.
*/

/* Question 4
Short-circuit evaluation means in A && B, if A is false, B isn’t evaluated. in A || B, if A is true, 
B isn’t evaluated. Example: if (ptr != nullptr && ptr->value > 0) safely avoids null pointer access.
*/

// 4. Functions and Methods
#include <iostream>
#include <string>
#include <algorithm> // For std::equal

bool isPalindrome(const std::string& str) {
// An elegant way is to compare the first half with the reverse of the second half.
return std::equal(str.begin(), str.begin() + str.size()/2, str.rbegin());
}
int main() {
std::cout << "madam is palindrome? " << (isPalindrome("madam") ? "true" : "false") << std::endl;
std::cout << "hello is palindrome? " << (isPalindrome("hello") ? "true" : "false") << std::endl;
return 0;
}

/* Question 2
In C++, arguments can be passed by value, by pointer or by reference. 
In Java, everything is pass-by-value, but object references themselves are passed by value.
*/

/* Question 3
Function/method overloading means multiple functions with the same name but different parameter lists. 
Valid differences include number of parameters, types, or order—not just return type.
*/

/* Question 4
Recursion is when a function calls itself to solve smaller subproblems. 
A base case is the stopping condition that prevents infinite recursion and ensures termination.
*/

// 5. Comments
#include <iostream>
/**
* @brief This is a documentation-style comment (Doxygen format).
* It explains the purpose of the main function.
* @return int Exit status of the program.
*/
int main() {
// This is a single-line comment.
int x = 5; // Useful for explaining a specific line.

/*
This is a multi-line comment.
It can span several lines and is useful for
longer explanations.
*/
std::cout << "Comments provide context." << std::endl;
return 0;
}

/* Question 2
Comments improve code maintainability by explaining intent, making it easier for team members 
to understand and modify the code.
*/

/* Question 3
Documentation systems like Javadoc (Java) and Doxygen (C++) generate structured API docs directly from comments, 
ensuring consistent, up-to-date references.
*/

/* Question 4
“Good code is self-documenting” means clear naming and structure reduce the need for comments, 
but comments are still necessary for explaining why something is done, complex algorithms, or non-obvious business logic.
*/

// 6. Classes
#include <iostream>

class BankAccount {
private:
    double balance;

public:
    // Constructor to initialize the balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
        }
    }

    // Method to add money to the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    // Method to view the current balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount(100.50);
    std::cout << "Initial balance: " << myAccount.getBalance() << std::endl;

    myAccount.deposit(50.25);
    std::cout << "Balance after deposit: " << myAccount.getBalance() << std::endl;

    return 0;
}

/* Question 2
A class is a blueprint or definition of properties and behaviors, while an object (instance) 
is a concrete realization of that class in memory.
*/

/* Question 3
- public: accessible from anywhere.
- private: accessible only within the class.
- protected: accessible within the class and its subclasses (and in C++, also friends).
*/

/* Question 4
A constructor initializes objects when they are created. 
A default constructor has no parameters; if none is defined, the compiler provides one automatically.
*/

// 7. Enums
#include <iostream>
#include <string>

enum class Season {
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
};

std::string recommendActivity(Season currentSeason) {
    switch (currentSeason) {
        case Season::SPRING: return "Plant flowers";
        case Season::SUMMER: return "Go to the beach";
        case Season::AUTUMN: return "Rake leaves";
        case Season::WINTER: return "Build a snowman";
        default: return "Rest";
    }
}

int main() {
    Season now = Season::AUTUMN;
    std::cout << "It’s autumn! Let’s: " << recommendActivity(now) << std::endl;
    return 0;
}

/* Question 2
Enums prevent the use of arbitrary integers or strings, making code clearer, less error-prone, 
and easier to maintain.
*/

/* Question 3
Enums enforce valid predefined values, improving type safety, 
and their descriptive names act as self-documentation in the code.
*/

/* Question 4
In Java, enums are full-fledged classes and can have methods, fields, and constructors. 
In modern C++, they are strongly typed but cannot directly contain methods. 
*/

// 8. Inheritance
#include <iostream>

// Base class (Superclass)
class Vehicle {
public:
    void startEngine() {
        std::cout << "Engine has started." << std::endl;
    }
};

// Derived class (Subclass)
class Car : public Vehicle {
public:
    void drive() {
        std::cout << "The car is moving." << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.startEngine(); // Inherited from Vehicle
    myCar.drive();       // Defined in Car
    return 0;
}

/* Question 2
The "is-a" relationship means a subclass is a specialized form of the superclass. 
The "has-a" relationship means an object contains another object as part of its state.
*/

/* Question 3
Method overriding lets a subclass redefine a method from its superclass. 
C++ uses 'virtual'/'override' for this, while Java uses the '@Override' annotation.
*/

/* Question 4
The "Diamond Problem" occurs when a class inherits the same base class through multiple paths. 
C++ solves it with virtual inheritance; Java avoids it by disallowing multiple class inheritance and using interfaces instead.
*/

// 9. Mixins (in Flutter, Multiple Inheritance in C++) and Interfaces
#include <iostream>
#include <string>

// A base class that must be implemented by anything that wants to be printable
class IStringable {
public:
    virtual std::string toString() const = 0;
    virtual ~IStringable() = default;
};

// "Mixin" class that provides functionality to any IStringable
class Printable {
public:
    void print(const IStringable& obj) {
        std::cout << obj.toString() << std::endl;
    }
};

// Book must implement the IStringable contract
class Book : public IStringable {
private:
    std::string title;
    std::string author;
public:
    Book(std::string t, std::string a) : title(t), author(a) {}

    std::string toString() const override {
        return "'" + title + "' by " + author;
    }
};

int main() {
    Book myBook("The Hobbit", "J.R.R. Tolkien");
    Printable p;
    p.print(myBook); // Use the printable functionality on the book
    return 0;
}

/* Question 2
The goal of mixins/interfaces with defaults is to promote code reuse by injecting behavior 
without forcing rigid inheritance, enabling more flexible design.
*/

/* Question 3
Java’s 'default' methods in interfaces allow shared behavior to be included in all implementers, 
achieving mixin-like reuse without requiring multiple inheritance.
*/

/* Question 4
Inheritance provides hierarchy but can cause tight coupling, composition favors flexibility by 
embedding objects, and mixins offer reusable behavior across classes with minimal hierarchy constraints.
*/

// 10. Polymorphism
#include <iostream>
#include <vector>
#include <memory> // For std::unique_ptr

class Shape {
public:
    virtual double getArea() const = 0; // Pure virtual function
    virtual ~Shape() = default;         // Virtual destructor
};

class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double width, double height) : w(width), h(height) {}
    double getArea() const override { return w * h; }
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) : r(radius) {}
    double getArea() const override { return 3.14159 * r * r; }
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Rectangle>(10, 5));
    shapes.push_back(std::make_unique<Circle>(3));

    for (const auto& shape : shapes) {
        // Runtime polymorphism: correct getArea() is chosen at runtime
        std::cout << "Area: " << shape->getArea() << std::endl;
    }
    return 0;
}

/* Question 2
Compile-time polymorphism: method overloading. Example: `int add(int a, int b)` vs `double add(double a, double b)`.
Runtime polymorphism: method overriding via virtual functions, where the actual method called depends on the object type at runtime.
*/

/* Question 3
Abstract class: class with at least one pure virtual function, can hold state + partial implementation.
Interface (Java) / fully abstract class (C++): only pure virtual methods, no implementation/state.
Use abstract class when you want base logic + contract; use interface for contract only.
*/

/* Question 4
Java interfaces and C++ pure abstract classes both define a contract of methods.
Polymorphism is achieved because different classes implement these methods, and the correct implementation is called at runtime through references/pointers.
*/

// 11. Async Operations
#include <iostream>
#include <future>

long long calculateSum() {
    long long sum = 0;
    for (long long i = 1; i <= 1000000000; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    std::cout << "Main thread: Starting calculation..." << std::endl;

    // Launch async task
    std::future<long long> sumFuture = std::async(std::launch::async, calculateSum);

    std::cout << "Main thread: Waiting for result..." << std::endl;

    // Block until result is ready
    long long result = sumFuture.get();

    std::cout << "Main thread: The calculated sum is: " << result << std::endl;

    return 0;
}

/* Question 2
Async programming solves blocking problems: instead of halting the main thread on I/O (network, DB, files), tasks run in background while the app stays responsive.
*/

/* Question 3
Parallel execution: tasks run truly simultaneously on multiple cores.
Concurrent execution: tasks make progress in overlapping time, but not necessarily at the same moment.
*/

/* Question 4
Future/Promise: a mechanism for handling results of async operations.
In C++ `std::future` retrieves results produced by `std::async`; a `std::promise` sets the value.
In Java, `Future` gives eventual results; `CompletableFuture` adds chaining, callbacks, and composition.
*/

// 12. Exceptions
#include <iostream>
#include <stdexcept> // For std::invalid_argument

void processAge(int age) {
    if (age < 0) {
        throw std::invalid_argument("Age cannot be negative.");
    }
    std::cout << "Age processed successfully: " << age << std::endl;
}

int main() {
    int userAge = -5;

    try {
        std::cout << "Processing age: " << userAge << std::endl;
        processAge(userAge);
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "Program continues." << std::endl;
    return 0;
}

/* Question 2
- try: encloses code that might throw an exception.
- catch: handles exceptions, preventing program crash.
- finally (Java): always executes cleanup code; in C++ RAII achieves this by tying resource release to object destruction (e.g., smart pointers).
*/

/* Question 3
- Java: Checked exceptions must be declared/handled; Unchecked (RuntimeException) don’t need explicit handling.
- C++: No such distinction — all exceptions are unchecked.
*/

/* Question 4
Advantages:
- Cleaner error-handling logic, separates normal flow from error flow.
- Propagates errors up call stack automatically.
Disadvantages:
- Can be misused (throwing too often or for non-exceptional cases).
- Performance overhead in some scenarios.
*/
