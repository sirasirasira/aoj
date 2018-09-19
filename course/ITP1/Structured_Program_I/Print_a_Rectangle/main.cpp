//#include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
// #include <string>
// #include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

void rectangle(int h, int w) {
	for (int i = 0; i < h; i++ ) {
		for (int i = 0; i < w; i++ ) {
			cout << "#";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	while (1) {
		int H, W;
		cin >> H >> W;
		if (H == 0 and W == 0) {
			break;
		}
		rectangle(H, W);
	}
	return 0;
}
