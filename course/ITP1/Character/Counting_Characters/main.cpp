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
	vector<int> cnt(26, 0);
	while (1) {
		string s;
		getline(cin, s);
		if (s.size() == 0) {
			break;
		}
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		for (unsigned int i = 0; i < s.size(); i++) {
			cnt[s[i] - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << char(i + 'a') << " : " << cnt[i] << endl;
	}
	return 0;
}
