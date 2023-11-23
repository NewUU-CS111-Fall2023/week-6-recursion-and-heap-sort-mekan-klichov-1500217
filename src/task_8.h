/*
 * Author: Mekan Klichov
 * Date: 23.11.2023
 * Name: Mekan Klichov
 */

#include <iostream>
#include <cmath>
#include <string>



std::string add(const std::string& num1, const std::string& num2) {
    size_t len = std::max(num1.size(), num2.size());
    std::string result(len, '0');
    int carry = 0;

    for (int i = len - 1; i >= 0; --i) {
        int sum = carry + (i < num1.size() ? (num1[i] - '0') : 0) + (i < num2.size() ? (num2[i] - '0') : 0);
        result[i] = (sum % 10) + '0';
        carry = sum / 10;
    }

    if (carry > 0) {
        result.insert(result.begin(), carry + '0');
    }

    return result;
}

std::string subtract(const std::string& num1, const std::string& num2) {
    size_t len = std::max(num1.size(), num2.size());
    std::string result(len, '0');
    int borrow = 0;

    for (int i = len - 1; i >= 0; --i) {
        int x = (i < num1.size() ? (num1[i] - '0') : 0) - borrow;
        int y = (i < num2.size() ? (num2[i] - '0') : 0);

        if (x < y) {
            x += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result[i] = (x - y) + '0';
    }

    size_t pos = result.find_first_not_of('0');
    return (pos == std::string::npos) ? "0" : result.substr(pos);
}

std::string zeroPadding(const std::string& num, size_t zeros) {
    return std::string(zeros, '0') + num;
}

std::string karatsubaMultiply(const std::string& num1, const std::string& num2) {
    // Base case: If numbers are small, perform regular multiplication
    if (num1.size() == 1 || num2.size() == 1) {
        return std::to_string(std::stoll(num1) * std::stoll(num2));
    }

    // Determine the size of the numbers
    size_t n = std::max(num1.size(), num2.size());
    size_t m = (n + 1) / 2;

    // Divide the numbers into two halves
    std::string a = num1.substr(0, num1.size() - m);
    std::string b = num1.substr(num1.size() - m);
    std::string c = num2.substr(0, num2.size() - m);
    std::string d = num2.substr(num2.size() - m);

    // Recursive steps
    std::string ac = karatsubaMultiply(a, c);
    std::string bd = karatsubaMultiply(b, d);
    std::string abcd = karatsubaMultiply(add(a, b), add(c, d));

    // Compute the intermediate terms
    std::string adbc = subtract(subtract(abcd, ac), bd);

    // Combine the results
    return add(add(zeroPadding(ac, 2 * m), zeroPadding(adbc, m)), bd);
}