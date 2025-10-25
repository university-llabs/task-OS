#pragma once
#include <vector>
#include <stdexcept>

using namespace std;

class Fibonacci {
public:
	static vector<unsigned long long> generated(int n) {
        if (n == 0) return {};
        if (n > 94) throw overflow_error("Too large n: overflow risk");
        vector<unsigned long long> result(n);
        result.reserve(n);

        if (n >= 1) result[0] = 0;
        if (n >= 2) result[1] = 1;

        for (int i = 2; i < n; i++) {
            result[i] = result[i - 1] + result[i - 2];
        }
        return result;
	}
};

