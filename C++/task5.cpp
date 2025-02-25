/*
Duilio Lucio, CS333, Project 3, 10/15/2024
*/

#include <iostream>
using namespace std;

// function that matches signature needed
int add(int a, int b) {
    return a + b;
}

// function that showcases passing functions as parameters
int multiply(int a, int b) {
    return a * b;
}

// function that takes a parameter(function)
int operate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b); // calls the passed function 
}

// function that demonstrates function pointers(assigning functions to variables)
void showFunctionPointers() {
    // declares function pointer and is assigned to add(function)
    int (*funcPtr)(int, int) = add;
    cout << "Using Pointer to call 'add': " << funcPtr(3, 4) << endl;

    // reassingns pointer to multiply(function)
    funcPtr = multiply;
    cout << "Using Pointer to call 'multiply': " <<funcPtr(3, 4) << endl; 
}

int main() {
    // passing function to another function
    cout << "Result of add(3, 5) using 'operate': " << operate(3, 5, add) << endl;
    cout << "Result of multiply(3, 5) using operate: " << operate(3, 5, multiply) << endl;

    //shows the function
    showFunctionPointers();
    return 0;
}