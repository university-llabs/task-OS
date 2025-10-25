#include "palindrome.h"
#include <vector>

using namespace std;

bool Palindrome::IsPalindrome(int num) {
    if (num < 0) return false;

    int original = num;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        if (reversed > (numeric_limits<int>::max() - digit) / 10)
            return false;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

