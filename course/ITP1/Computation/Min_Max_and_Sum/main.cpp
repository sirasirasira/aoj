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
	int num;
	vector<int> vec;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	sort(vec.begin(), vec.end());
	long sum = 0;
	for (int i = 0; i < num; i++) {
		if (i == 0) {
			cout << vec[i] << " ";
		}
		if (i == num - 1) {
			cout << vec[i] << " ";
		}
		sum += vec[i];
	}
	cout << sum << endl;
	return 0;
}
