//#include "bits/stdc++.h"

#include <iostream>
#include <iomanip>
#include <vector>
// #include <map>
// #include <string>
// #include <algorithm>
// #include <numeric>
// #include <limits>

using namespace std;

int main() {
	int a, b, d, r;
	double f;
	cin >> a >> b;
	d = a / b;
	r = a % b;
	f = double(a) / b;
	cout << d << " " << r << " ";
	cout << fixed;
	cout << setprecision(5) << f << endl;
	return 0;
}
