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
	int n, m, l;
	vector<vector<int>> a, b;
	vector<vector<long>> c;
	cin >> n >> m >> l;
	for (int i = 0; i < n; i++) {
		vector<int> v_tmp;
		for (int j = 0; j < m; j++) {
			int tmp;
			cin >> tmp;
			v_tmp.push_back(tmp);
		}
		a.push_back(v_tmp);
	}
	for (int i = 0; i < m; i++) {
		vector<int> v_tmp;
		for (int j = 0; j < l; j++) {
			int tmp;
			cin >> tmp;
			v_tmp.push_back(tmp);
		}
		b.push_back(v_tmp);
	}

	for (int i = 0; i < n; i++) {
		vector<long> v_tmp;
		for (int j = 0; j < l; j++) {
			long sum = 0;
			for (int k = 0; k < m; k++) {
				sum += a[i][k] * b[k][j];
			}
			v_tmp.push_back(sum);
		}
		c.push_back(v_tmp);
	}

	for (auto itr = c.begin(); itr != c.end(); ++itr) {
		for (auto itr2 = (*itr).begin(); itr2 != (*itr).end(); ++itr2) {
			if (itr2 != (*itr).begin()) {
				cout << " ";
			}
			cout << *itr2;
		}
		cout << endl;
	}

	return 0;
}
