/*
 * Author: Mekan Klichov
 * Date: 23.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>

string isPrime(int n, int i = 2) {
    // Base case: If i becomes equal to n, the number is prime
    if (i == n) {
        return "YES";
    }
        // Base case: If n is divisible by i, the number is composite
    else if (n % i == 0) {
        return "NO";
    }
        // Recursive case: Check the next divisor
    else {
        return isPrime(n, i + 1);
    }
}