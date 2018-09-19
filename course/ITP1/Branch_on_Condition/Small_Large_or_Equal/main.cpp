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
	int a, b;
	cin >> a >> b;
	if (a < b) {
		cout << "a < b" << endl;
	} else if (a > b) {
		cout << "a > b" << endl;
	} else {
		cout << "a == b" << endl;
	}
	return 0;
}
