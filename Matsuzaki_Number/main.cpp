#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;

vector<int> make_prime(int n, int p) {
	int cnt = 0;
	int number = n+1;
	vector<int> res;
	while (cnt < p) {
		bool flag = true;
		if (number == 1) {
			number++;
			continue;
		}
		for (int i = 2; i <= sqrt(number); i++) {
			if (number % i == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			res.push_back(number);
			cnt++;
		}
		number++;
	}
	return res;
}

int matsuzaki(int n, int p) {
	int res;
	vector<int> sum;
	vector<int> prime = make_prime(n, p);
	for (int i = 0; i < p; i++) {
		for (int j = i; j < p; j++) {
			sum.push_back(prime[i] + prime[j]);
		}
	}
	sort(sum.begin(), sum.end());
	res = sum[p-1];
	return res;
}

int main(void) {
	while (1) {
		int N, P;
		cin >> N >> P;
		if (N == -1 and P == -1) {
			break;
		}
		int res = matsuzaki(N, P);
		cout << res << endl;
	}
	return 0;
}
