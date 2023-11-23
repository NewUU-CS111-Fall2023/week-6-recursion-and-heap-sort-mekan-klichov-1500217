/*
 * Author: Mekan Klichov
 * Date: 23.11.2023
 * Name: Mekan Klichov
 */

#include <string>
#include <vector>
#include <algorithm>

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

std::string permuteString(const std::string& s) {
    std::vector<std::pair<char, int>> vowels;

    for (int i = 0; i < s.length(); ++i) {
        if (isVowel(s[i])) {
            vowels.push_back({s[i], i});
        }
    }

    std::sort(vowels.begin(), vowels.end(), [](const auto& a, const auto& b) {
        return a.first < b.first;
    });

    std::string result = s;
    for (const auto& v : vowels) {
        result[v.second] = v.first;
    }

    return result;
}