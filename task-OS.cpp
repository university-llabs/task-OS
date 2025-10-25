#include <iostream>
#include "fibonacci.h"
#include "palindrome.h"

using namespace std;

void demoFibonacci() {
    cout << "Fibonacci Demo:" << endl;
    try {
        auto fibs = Fibonacci::generated(10);
        cout << "First 10 Fibonacci numbers: ";
        for (auto num : fibs) {
            cout << num << " ";
        }
        cout << endl;
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
}

void demoPalindrome() {
    cout << "\nPalindrome Demo: " << endl;
    int numbers[] = { 12321, 12345, 1221, -121 };
    for (int num : numbers) {
        cout << num << " is palindrome: "
            << (Palindrome::IsPalindrome(num) ? "true" : "false") << endl;
    }
}

int main() {

    demoFibonacci();
    demoPalindrome();
	return 0;
}
