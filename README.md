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
