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
	int a, b, c;
	cin >> a >> b >> c;
	int cnt = 0;
	for (int i = a; i <= b; i++) {
		if (c % i == 0) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
