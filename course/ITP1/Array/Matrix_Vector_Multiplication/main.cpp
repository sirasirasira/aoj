//#include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
// #include <string>
// #include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

void cal(vector<vector<int>> a, vector<int> b) {
	for (auto itr = a.begin(); itr != a.end(); ++itr) {
		int sum = 0;
		for (unsigned int i = 0; i < itr->size(); i++) {
			sum += (*itr)[i] * b[i];
		}
		cout << sum << endl;
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> A;
	vector<int> B;
	for (int i = 0; i < n; i++) {
		vector<int> v_tmp;
		for (int j = 0; j < m; j++) {
			int tmp;
			cin >> tmp;
			v_tmp.push_back(tmp);
		}
		A.push_back(v_tmp);
	}
	for (int i = 0; i < m; i++) {
		int tmp;
		cin >> tmp;
		B.push_back(tmp);
	}
	cal(A, B);
	return 0;
}
