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
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (97 <= s[i] and s[i] <= 122) {
			cout << char(s[i] - 32);
			continue;
		}
		if (65 <= s[i] and s[i] <= 90) {
			cout << char(s[i] + 32);
			continue;
		}
			cout << s[i];
	}
	cout << endl;
	return 0;
}
