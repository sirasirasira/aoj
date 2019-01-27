// #include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
// #include <string>
#include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

int main() {
	int n;
	while (1) {
		cin >> n;
		if (n == 0) {
			break;
		}
		int count = 0;
		vector<int> vec(n, 0);
		for (int i = 0; i < n; i++) {
			cin >> vec[i];
		}
		double mean = accumulate(vec.begin(), vec.end(), 0.0) / vec.size();
		sort(vec.begin(), vec.end());
		for (auto itr = vec.begin(); itr < vec.end(); itr++) {
			if (*itr <= mean) {
				count++;
			} else {
				break;
			}
		}
		cout << count << endl;
	}
	// std::cout << "\e[38;5;0m\e[48;5;40m --- end ---  \e[m" << std::endl; // debug
	return 0;
}
