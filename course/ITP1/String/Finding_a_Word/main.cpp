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
	string w, s;
	cin >> w;

	int sum = 0;
	while (1) {
		cin >> s;
		if (s == "END_OF_TEXT") {
			break;
		}
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		if (s == w) {
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}
