/*
 * Author: Mekan Klichov
 * Date: 23.11.2023
 * Name: Mekan Klichov
 */
#include <iostream>

void findSecondLargest(int &largest, int &secondLargest) {
    int number;
    std::cin >> number;

    // Base case: Stop recursion when the number is 0
    if (number == 0) {
        return;
    }

    // Update largest and secondLargest based on the current number
    if (number > largest) {
        secondLargest = largest;
        largest = number;
    } else if (number > secondLargest) {
        secondLargest = number;
    }

    // Recursive call to process the next number in the sequence
    findSecondLargest(largest, secondLargest);
}