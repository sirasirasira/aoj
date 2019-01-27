// #include "bits/stdc++.h"

#include <iostream>
#include <vector>
// #include <map>
#include <string>
// #include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

struct Wareki {
	string g;
	int y;
	int m;
	int d;

	explicit Wareki() {};
	explicit Wareki(string g, int y, int m, int d) : g(g), y(y), m(m), d(d) {};
	void print() {
		cout << g << " " << y << " " << m << " " << d << endl;
	}
	Wareki convert() {
		Wareki converted;
		converted.g = g;
		converted.y = y;
		converted.m = m;
		converted.d = d;
		if ((y == 31 and m >= 5) or y > 31) {
			converted.g = "?";
			converted.y = y - 30;
		}
		return converted;
	}
};

int main() {
	string g;
	int y, m, d;

	while (1) {
		cin >> g >> y >> m >> d;
		if (g == "#") {
			break;
		}
		Wareki before(g, y, m, d);
		Wareki after = before.convert();
		after.print();
	}

	// std::cout << "\e[38;5;0m\e[48;5;40m --- end ---  \e[m" << std::endl; // debug
	return 0;
}
