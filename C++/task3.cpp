/*
Duilio Lucio, CS333, Project 3, 10/15/2024
*/

#include <iostream>
#include <string>
using namespace std;

// Aggregate type that is a structure that groups multiple variables
struct Person {
    string name;
    int age;
};

// function that does basic arithmetic operations
void demonstrateOperations() {
    int a = 10, b = 3;

    cout << "Arithmetic Operations:" << endl;
    cout << "Addition (a + b): " << a + b << endl;
    cout << "Subtraction (a - b): " << a - b << endl;
    cout << "Multiplication (a * b): " << a * b << endl;
    cout << "Division (a / b): " << a / b << endl;
    cout << "Modulus (a % b): " << a % b << endl; // Remainder of division

    cout << "\nComparison Operations:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;

    cout << "\nLogical Operations:" << endl;
    cout << "(a > 0) && (b > 0): " << ((a > 0) && (b > 0)) << endl;
    cout << "(a > 0) || (b < 0): " << ((a > 0) || (b < 0)) << endl;
    cout << "!(a == b): " << !(a == b) << endl;
}

//function that demonstrates use of aggregate types (structs)
void demonstrateAggregateTypes() {
    Person person1 = {"Bender", 25};
    Person person2 = {"Taylor", 30};

    cout << "\nAggregate Type (Struct) Example:" << endl;
    cout << "Person 1: " << person1.name << ", Age: " << person1.age << endl;
    cout << "Person 2: " << person2.name << ", Age: " << person2.age << endl;
}

int main() {
    demonstrateOperations();
    demonstrateAggregateTypes();
    return 0;
}