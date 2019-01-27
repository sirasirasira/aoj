//#include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
// #include <string>
// #include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

void grade(int m, int f, int r) {
	char res;
	int sum = m + f;
	if (m == -1 or f == -1) {
		res = 'F';
	} else if (80 <= sum) {
		res = 'A';
	} else if (65<= sum and sum < 80) {
		res = 'B';
	} else if (50<= sum and sum < 65) {
		res = 'C';
	} else if (30<= sum and sum < 50) {
		if (50 <= r) {
			res = 'C';
		} else {
			res = 'D';
		}
	} else {
		res = 'F';
	}
	cout << res << endl;
}

int main() {
	while (1) {
		int m, f, r;
		cin >> m >> f >> r;
		if (m == -1 and f == -1 and r == -1) {
			break;
		}
		grade(m, f, r);
	}
	return 0;
}
