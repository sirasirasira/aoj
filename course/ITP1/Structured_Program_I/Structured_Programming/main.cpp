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
	for (int i = 1; i <= n; i++) {
		int tmp = i;
			if(tmp % 3 == 0) {
				cout << " " << i;
				continue;
			}
			while (tmp > 0) {
				if(tmp % 10 == 3) {
					cout << " " << i;
					break;
				}
				tmp  /= 10;
			}
	}
	cout << endl;
	return 0;
}
