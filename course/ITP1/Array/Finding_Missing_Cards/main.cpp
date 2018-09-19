//#include "bits/stdc++.h"

#include <iostream>
#include <vector>
#include <map>
// #include <string>
#include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

void check(char m, vector<int> vec) {
	sort(vec.begin(), vec.end());
	int card_idx = 0;
	for (int i = 1; i <= 13; i++) {
		while (i > vec[card_idx]) {
			card_idx++;
		}
		if (i != vec[card_idx]) {
			cout << m << " " << i << endl;
		}
	}
}

int main() {
	map<char, vector<int>> cards;
	int n;
	char marks[4] = {'S', 'H', 'C', 'D'};
	cin >> n;
	for (int i = 0; i < n; i++ ) {
		char mark;
		int num;
		cin >> mark >> num;
		cards[mark].push_back(num);
	}
	for (char i : marks) {
		cards[i].push_back(14);
		check(i, cards[i]);
	}
	return 0;
}
