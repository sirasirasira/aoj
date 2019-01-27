//#include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
// #include <string>
// #include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

void check(int n, int x) {
	int cnt = 0;
	for (int i = 1; i <= n - 2; i++) {
		for (int j = i + 1; j <= n - 1; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (i + j + k == x) {
					cnt++;
				}
			}
		}
	}
	cout << cnt << endl;
}

int main() {
	while (1) {
		int n, x;
		cin >> n >> x;
		if (n == 0 and x == 0) {
			break;
		}
		check(n, x);
	}
	return 0;
}
