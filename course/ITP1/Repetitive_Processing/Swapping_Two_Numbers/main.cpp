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
	while (1) {
		int a, b, tmp;
		cin >> a >> b;
		if (a == 0 and b == 0) {
			break;
		}
		if (a > b) {
			tmp = a;
			a = b;
			b = tmp;
		}
		cout << a << " " << b << endl;
	}
	return 0;
}
