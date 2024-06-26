# Learning C and C++ to enhnce skills. C/C++ Configured in VS code.

# Configuring is quite simple and easy.

# Notes:

1. C++ is a cross-platform language that can be used to create high-performance applications.
2. C++ was developed by Bjarne Stroustrup, as an extension to the C language.
3. C++ gives programmers a high level of control over system resources and memory.
4. The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.

# Why Use C++

C++ is one of the world's most popular programming languages.

C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems.

C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.

C++ is portable and can be used to develop applications that can be adapted to multiple platforms.

C++ is fun and easy to learn!

As C++ is close to C, C# and Java, it makes it easy for programmers to switch to C++ or vice versa.

# Difference between C and C++

C++ was developed as an extension of C, and both languages have almost the same syntax.

The main difference between C and C++ is that C++ support classes and objects, while C does not.

# C++ Get Started

To start using C++, you need two things:

A text editor, like Notepad, to write C++ code
A compiler, like GCC, to translate the C++ code into a language that the computer will understand

# Understnding Simple C++ Bolier Plate

#include <iostream>
using namespace std;

int main() {
cout << "Hello World!";
return 0;
}
Line 41: #include <iostream> is a header file library that lets us work with input and output objects, such as cout (used in line 5). Header files add functionality to C++ programs.
Line 42: using namespace std means that we can use names for objects and variables from the standard library.
Line 43: A blank line. C++ ignores white space. But we use it to make the code more readable
Line 44: Another thing that always appear in a C++ program, is int main(). This is called a function. Any code inside its curly brackets {} will be executed.
Line 45: cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World!".

Note: Every C++ statement ends with a semicolon ;.
Line 46: return 0 ends the main function.

To get the size of an array, you can use the sizeof() operator:

# C++ Structures (Struct)

Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

Unlike an array, a structure can contain many different data types (int, string, bool, etc.).

# References:

A reference variable is a "reference" to an existing variable, and it is created with the & operator:

# Memory Address

In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.

To access it, use the & operator, and the result will represent where the variable is stored:
Note: The memory address is in hexadecimal form (0x..). Note that you may not get the same result in your program.
And why is it useful to know the memory address?
References and Pointers (which you will learn about in the next chapter) are important in C++, because they give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance.

These two features are one of the things that make C++ stand out from other programming languages, like Python and Java.

# Pointer
A pointer however, is a variable that stores the memory address as its value.

A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:

# Memory Address and Value:
Note that the * sign can be confusing here, as it does two different things in our code:

When used in declaration (string* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.
string food = "Pizza";  // Variable declaration
string* ptr = &food;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";

# Modify Pointers:
You can also change the pointer's value. But note that this will also change the value of the original variable:
string food = "Pizza";
string* ptr = &food;

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Access the memory address of food and output its value (Pizza)
cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food << "\n";

# C++ Functions
# Function Overloading
With function overloading, multiple functions can have the same name with different parameters:
Note: Multiple functions can have the same name as long as the number and/or type of parameters are different.

# Recursion
Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.

Recursion Example
Adding two numbers together is easy to do, but adding a range of numbers is more complicated. In the following example, recursion is used to add a range of numbers together by breaking it down into the simple task of adding two numbers:


# C++ What is OOP?
OOP stands for Object-Oriented Programming.

Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.

Object-oriented programming has several advantages over procedural programming:

OOP is faster and easier to execute
OOP provides a clear structure for the programs
OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
OOP makes it possible to create full reusable applications with less code and shorter development time
Tip: The "Don't Repeat Yourself" (DRY) principle is about reducing the repetition of code. You should extract out the codes that are common for the application, and place them at a single place and reuse them instead of repeating it.

# C++ What are Classes and Objects?
Classes and objects are the two main aspects of object-oriented programming.

Look at the following illustration to see the difference between class and objects:
1. Calss : Fruit-------------> Object: Banana, Orange, Mango

So, a class is a template for objects, and an object is an instance of a class.

When the individual objects are created, they inherit all the variables and functions from the class.

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

# Class Methods
Methods are functions that belongs to the class.
There are two ways to define functions that belongs to a class:

Inside class definition
Outside class definition

To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:

# Constructor
Constructor is a special method in C++ that is automatically called when an object of a class is created.
to create a constructor use the same name as class followed by paranthesis();
it is always public and does not have a return value.

# Access Specifiers
Access specifiers define how the class members like attributes and methods can be accessed
In C++ there are 3 types of access specifiers Public, Private and Protected.

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes

In case of accessing a private member, error willbe occurred.
It is possible to access a private member using public method inside the same class.
It is considered good practice to declare your class attributes as private (as often as you can). This will reduce the possibility of yourself (or others) to mess up the code. This is also the main ingredient of the Encapsulation concept,
Note: By default, all members of a class are private if you don't specify an access specifier:

# Encapsulation
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.

## Why Encapsulation?
It is considered good practice to declare your class attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
Increased security of data
Encapsulation also means that it binds data and code togather into one unit

# Inheritance
In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.

In the example below, the Car class (child) inherits the attributes and methods from the Vehicle class (parent):
## Why And When To Use "Inheritance"?
- It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

### Multilevel Inheritance
A class can also be derived from one class, which is already derived from another class.

## Multiple Inheritance
A class can also be derived from more than one base class, using a comma-separated list:

## Access Specifiers
There are three specifiers available in C++. Until now, we have only used public (members of a class are accessible from outside the class) and private (members can only be accessed within the class). The third specifier, protected, is similar to private, but it can also be accessed in the inherited class:

## Polymorphism
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.

For example, think of a base class called Animal that has a method called animalSound(). Derived classes of Animals could be Pigs, Cats, Dogs, Birds - And they also have their own implementation of an animal sound (the pig oinks, and the cat meows, etc.):

# C++ Files
The fstream library allows us to work with files.
To use the fstream library, include both the standard <iostream> AND the <fstream> header file:

There are three classes included in the fstream library, which are used to create, write or read files:
1. ofstream	Creates and writes to files
2. ifstream	Reads from files
3. fstream	A combination of ofstream and ifstream: creates, reads, and writes to files
It is considered good practice, and it can clean up unnecessary memory space.

# C++ Exceptions
When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.

When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error).

## C++ try and catch
Exception handling in C++ consist of three keywords: try, throw and catch:
The try statement allows you to define a block of code to be tested for errors while it is being executed.
The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.
The try and catch keywords come in pairs:

One can handle any type of exeption by using 3 dots "..." in catch block. this syntax will handle any type of exception when we dont know the throw type.