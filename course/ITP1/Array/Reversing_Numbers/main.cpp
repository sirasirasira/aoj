//#include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
// #include <string>
// #include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	for (auto itr = vec.rbegin(); itr != vec.rend(); ++itr) {
		if (itr != vec.rbegin()) {
			cout << " ";
		}
		cout << *itr;
	}
	cout << endl;
	return 0;
}
