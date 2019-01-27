//#include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
// #include <string>
#include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

int main() {
	int n, m, value;
	vector<int> vec;
	while (1) {
		cin >> n >> m;
		if (n == 0 and m == 0) {
			break;
		}
		value = 0;
		vec.resize(n);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}
		sort(vec.begin(), vec.end(), greater<int>());
		for (auto itr = vec.begin(); itr < vec.end(); itr++) {
			for (auto itr2 = itr+1; itr2 < vec.end(); itr2++) {
				int tmp = *itr + *itr2;
				if (tmp <= m and value < tmp) {
					value = tmp;
				}
			}
		}
		if (value != 0) {
			cout << value << endl;
		} else {
			cout << "NONE" << endl;
		}
		vec.resize(0);
	}

	// std::cout << "\e[38;5;0m\e[48;5;40m --- end ---  \e[m" << std::endl; // debug
	return 0;
}
