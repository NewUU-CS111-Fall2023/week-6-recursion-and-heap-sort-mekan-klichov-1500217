/*
 * Author: Mekan Klichov
 * Date: 23.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>

int sumOfDigits(int n) {
    // Base case: If n becomes 0, return 0
    if (n == 0) {
        return 0;
    }
        // Recursive case: Return the last digit plus the sum of the remaining digits
    else {
        return n % 10 + sumOfDigits(n / 10);
    }
}