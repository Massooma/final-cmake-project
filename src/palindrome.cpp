#include "palindrome.h"
#include <algorithm>

bool is_palindrome(const std::string& str) {
    std::string cleaned_str = str;
    cleaned_str.erase(std::remove_if(cleaned_str.begin(), cleaned_str.end(), ::isspace), cleaned_str.end());
    return std::equal(cleaned_str.begin(), cleaned_str.begin() + cleaned_str.size() / 2, cleaned_str.rbegin());
}
