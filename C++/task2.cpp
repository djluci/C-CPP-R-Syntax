/*
Duilio Lucio, CS333, Project 3, 10/15/2024
*/


#include <iostream>
using namespace std;

// function for binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    // while loop that searches for the target(control flow)
    while (left <= right) {
        int mid = left + (right - left) / 2; // calculates middle index

        // if target is found then return the index
        if (arr[mid] == target) {
            return mid;
        }
        // if target is smaller then we ignore the right half
        if (arr[mid] > target) {
            right = mid - 1;
        }
        // if target is larger, ignore the left hald
        else {
            left = mid + 1;
        }
    }

    // when target not found then return -1
    return -1;

}

int main() {
    // example array but must be sorted for binary search in order to work
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]); // calculates size of the array

    int target; // local variable in main function
    cout << "Enter a number to search: ";
    cin >> target;

    // calls binary function
    int result = binarySearch(arr, size, target);

    // prints result statement of binary search
    if (result != -1) {
        cout << "Element found at index" << index << endl;
    }
    else {
        cout << "Element not found in the array" << endl;
    }
    return 0;
}