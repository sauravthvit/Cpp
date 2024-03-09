PREPROCESSOR

Preprocessor processes the source code before the compiler sees it.
Preprocessor directors are lines in the source code that start with a # or pound symbol,
The C++ preprocessor doesn't understand C++. It simply follows the preprocessor directives and get the source code ready for the compiler. The compiler is the program that doesn't understand C++.

COMMENTS

Comments are programmable readable explanations in the source code. They are ignored by the compiler.

MAIN FUNCTION

int main(){

}

NAMESPACE

Used to remove naming conflicts. If you use namespace, you don;t need to use std

You can also use namespace variant like this:

using std::cout;
using std::cin;
using std::endl;

cout, cin, cerr, clog are objects representing streams

C++ uses stream abstraction to handle I/O operations


