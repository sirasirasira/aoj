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
	vector<int> num;
	for (int i = 0; i < 3; i++) {
		int tmp;
		cin >> tmp;
		num.push_back(tmp);
	}
	sort(num.begin(), num.end());
	cout << num[0] << " " << num[1] << " " << num[2] << endl;
	return 0;
}
