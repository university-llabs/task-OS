#include "fibonacci.h"
#include <vector>
#include <stdexcept>

using namespace std;

vector<unsigned long long> Fibonacci::generated(unsigned int n) {
	if (n == 0) return {};
	if (n > 94) throw overflow_error("Too large n: overflow risk");
	vector<unsigned long long> result(n + 1);
	result[0] = 1;
	result[1] = 1;
	for (int i = 2; i <= n; i++) {
		result[i] = result[i - 1] + result[i - 2];
	}
	return result;
}
