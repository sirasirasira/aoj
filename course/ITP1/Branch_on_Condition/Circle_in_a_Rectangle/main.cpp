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
	int W, H, x, y, r;
	cin >> W >> H >> x >> y >> r;
	if (r <= x and x <= W - r and r <= y and y <= H - r) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
