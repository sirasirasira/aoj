//#include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
// #include <string>
// #include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

void calculate(int a, int b, char op) {
	int res;
	if (op == '+') {
		res = a + b;
	} else if (op == '-' ) {
		res = a - b;
	} else if (op == '*' ) {
		res = a * b;
	} else {
		res = a / b;
	}
	cout << res << endl;
}

int main() {
	while (1) {
		int a, b;
		char op;
		cin >> a >> op >> b;
		if (op == '?') {
			break;
		}
		calculate(a, b, op);
	}
	return 0;
}
