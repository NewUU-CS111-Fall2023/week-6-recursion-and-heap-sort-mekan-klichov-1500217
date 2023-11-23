/*
 * Author: Mekan Klichov
 * Date: 23.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>

string isPowerOfTwo(int n) {
    // Base case: If n becomes 1, it is a power of two
    if (n == 1) {
        return "YES";
    }
        // If n is not divisible by 2 or becomes less than 1, it's not a power of two
    else if (n % 2 != 0 || n < 1) {
        return "NO";
    }
        // Recursive case: Call the function with n divided by 2
    else {
        return isPowerOfTwo(n / 2);
    }
}