/*
 * Author: Mekan Klichov
 * Date: 23.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>
#include <cstring>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_9.h"
#include "task_10.h"

int main() {
    std::cout << "Task 1" << std::endl;

    int A, B;

    // Input: Read two integers A and B
    std::cin >> A >> B;

    // Output: Call the function to print numbers
    printNumbers(A, B);
    cout << endl;

    std::cout << "Task 2" << std::endl;

    int Num;
    std::cin >> Num;

    std::cout << isPowerOfTwo(Num) << endl;

    std::cout << "Task 3" << std::endl;

    int N;
    std::cin >> N;
    std::cout << sumOfDigits(N) << std::endl;

    std::cout << "Task 4" << std::endl;

    int n;
    std::cin >> n;
    if (n<2){
        std::cin >> n;
    }

    std::cout << isPrime(n, 2) << endl;

    std::cout << "Task 5" << std::endl;

    const int MAX_LENGTH = 100;
    char word[MAX_LENGTH];
    std::cin >> word;
    int length = strlen(word);

    std::cout << isPalindrome(word, 0, length - 1) << endl;

    std::cout << "Task 6" << std::endl;

    int largest = 0;
    int secondLargest = 0;

    // Call the function to find the second largest element
    findSecondLargest(largest, secondLargest);

    // Output the result
    std::cout << secondLargest << std::endl;

    std::cout << "Task 7" << std::endl;

    int number;
    std::cin >> number;

    std::cout << reverseDigits(number, 0) << std::endl;

    std::cout << "Task 8" << std::endl;
    string num1, num2;

    std::cin >> num1 >> num2;
    string result = karatsubaMultiply(num1, num2);
    std::cout << result << std::endl;

    std::cout << "Task 9" << std::endl;

    std::vector<int> input1 = {4, 10, 3, 5, 1};
    Heap heap1(input1);
    heap1.heapSort();
    heap1.displayHeap();

    std::vector<int> input2 = {25, 17, 36, 2, 8, 19, 1};
    Heap heap2(input2);
    heap2.heapSort();
    heap2.displayHeap();

    std::vector<int> input3 = {1, 2, 3, 4, 5};
    Heap heap3(input3);
    heap3.heapSort();
    heap3.displayHeap();

    std::cout << "Task 10" << std::endl;

    std::string s;
    std::cin >> s;

    std::cout << permuteString(s) << std::endl;


    return 0;
}
