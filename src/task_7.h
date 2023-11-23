/*
 * Author: Mekan Klichov
 * Date: 23.11.2023
 * Name: Mekan Klichov
 */

int reverseDigits(int n, int reversed) {
    // Base case: If n becomes 0, return the reversed number
    if (n == 0) {
        return reversed;
    }

    // Extract the last digit of n
    int lastDigit = n % 10;

    // Append the last digit to the reversed number
    reversed = reversed * 10 + lastDigit;

    // Recursive call to process the remaining digits
    return reverseDigits(n / 10, reversed);
}