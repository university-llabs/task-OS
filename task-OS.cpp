#include <iostream>
#include "fibonacci.h"

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

int main() {

    demoFibonacci();
	return 0;
}
