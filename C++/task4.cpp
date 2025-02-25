/*
Duilio Lucio, CS333, Project 3, 10/15/2024
*/

#include <iostream>
using namespace std;

void ifElseExample(int number);
void switchExample(char grade);
void forLoopExample();
void whileLoopExample(int n);
void doWhileExample(int n);
void breakContinueExample();

int main() {
    cout << "If-Else Example: " << endl; 
    ifElseExample(7);

    cout << "\nSwitch Example: " << endl;
    switchExample('B');

    cout << "\nFor Loop Example: " << endl;
    forLoopExample();

    cout << "\nWhile Loop Example: " << endl;
    whileLoopExample(5);

    cout << "\nDo-While Loop Example: " << endl;
    doWhileExample(5);

    cout << "\nBreak and Continue Example: " << endl;
    breakContinueExample();

    return 0;
}

// defintion of functions
void ifElseExample(int number) {
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    }
    else {
        cout << number << " is odd." << endl;
    }
    
}

void switchExample(char grade){
    switch (grade) {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
    case 'C':
        cout << "Good Job!" << endl;
        break;
    case 'D':
        cout << "You Passed." << endl;
        break;
    default:
        cout << "Invalid Grade." << endl;
    }
}

void forLoopExample() {
    for (int i = 0; i < 5; i++) {
        cout << "Iteration " << i << endl;
    }
}

void whileLoopExample(int n) {
    while (n > 0) {
        cout << n << " ";
        n--;
    }
    cout << endl;
}
void doWhileExample(int n){
    do {
        cout << n << " ";
        n--;
    } while (n > 0);
    cout << endl;
        
}

void breakContinueExample() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) break;
        if (i % 2 == 0)continue;
        cout << i << " ";
    }
    cout << endl;
}
