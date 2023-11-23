/*
 * Author: Mekan Klichov
 * Date: 23.11.2023
 * Name: Mekan Klichov
 */

string isPalindrome(const char* word, int start, int end) {
    // Base case: If start becomes greater than or equal to end, the word is a palindrome
    if (start >= end) {
        return "YES";
    }
        // Base case: If the characters at start and end are not equal, the word is not a palindrome
    else if (word[start] != word[end]) {
        return "NO";
    }
        // Recursive case: Check the next pair of characters
    else {
        return isPalindrome(word, start + 1, end - 1);
    }
}