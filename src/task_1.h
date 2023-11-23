/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
using namespace std;

void printNumbers(int start, int end) {
    // Base case: if A > B, print in descending order
    if (start > end) {
        cout << start << " ";
        printNumbers(start - 1, end);  // Recursive call
    }
        // Base case: if A < B, print in ascending order
    else if (start < end) {
        cout << start << " ";
        printNumbers(start + 1, end);  // Recursive call
    }
        // Base case: A equals B, print the last number
    else {
        cout << start << " ";
    }
}