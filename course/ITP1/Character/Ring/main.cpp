//#include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
#include <string>
#include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

int main() {
	string s, p;
	bool flag = false;
	getline(cin, s);
	getline(cin, p);
	for (unsigned int i = 0; i < s.size(); i++) {
		for (unsigned int j = 0; j < p.size(); j++) {
			if (i + j >= s.size()) {
				if (s[i + j - s.size()] != p[j]) {
					break;
				}
			} else {
				if (s[i + j] != p[j]) {
					break;
				}
			}
			if (j == p.size() - 1) {
				flag = true;
			}
		}
		if (flag) {
			break;
		}
	}
	if (flag) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
