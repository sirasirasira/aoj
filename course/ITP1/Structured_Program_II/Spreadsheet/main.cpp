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
	int r, c;
	cin >> r >> c;
	vector<vector<int>> sp;
	for (int i = 0; i < r; i++) {
		vector<int> v_tmp;
		int sum = 0;
		for (int j = 0; j < c; j++) {
			int tmp;
			cin >> tmp;
			sum += tmp;
			v_tmp.push_back(tmp);
		}
		v_tmp.push_back(sum);
		sp.push_back(v_tmp);
	}
	int all = 0;
	vector<int> v_tmp;
	for (int i = 0; i < c; i++) {
		int sum = 0;
		for (int j = 0; j < r; j++) {
			sum += sp[j][i];
		}
		all += sum;
		v_tmp.push_back(sum);
	}
	v_tmp.push_back(all);
	sp.push_back(v_tmp);

	for (auto itr = sp.begin(); itr != sp.end(); ++itr) {
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
