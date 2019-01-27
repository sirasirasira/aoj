//#include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
#include <string>
// #include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

int main() {
	while (1) {
		int sum = 0;
		string s;
		cin >> s;
		if (s == "0") {
			break;
		}
		for (int i = 0; i < s.size(); i++) {
			sum += s[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}
