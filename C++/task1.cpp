/*
Duilio Lucio, CS333, Project 3, 10/15/2024
*/

#include <iostream>
using namespace std;

// Global variable (global scope)
int globalVar = 100;

void exampleFunction() {
    // local variable
    int localVar = 20;

    // print local & global variables
    cout << "Inside exampleFunction: " << endl;
    cout << "Local variable: " << localVar << endl;
    cout << "Global variable:" << globalVar << endl;

    // blocking the scope
    if (true) {
        int blockVar = 50; // variable only exists in this statement
        cout << "Block variable: " << blockVar << endl;
    }

    // compilation error that will occur since blockVar is not in the scope
    // cout << "Block Variable:" << blockVar << endl;

}

int main() { 
    // main function's local scope
    int localVar = 10;

    // prints global variable & local variable inside the main
    cout << "Inside main: " << endl;
    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;

    //calls function
    exampleFunction();
    return 0;
}