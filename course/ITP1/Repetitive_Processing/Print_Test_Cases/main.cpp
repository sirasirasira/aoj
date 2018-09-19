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
	int cnt = 0;
	while (1) {
		cnt++;
		int num;
		cin >> num;
		if (num == 0) {
			break;
		}
		cout << "Case " << cnt << ": " << num << endl;
	}
	return 0;
}
