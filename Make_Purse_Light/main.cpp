#include <iostream>
#include <vector>

#define D 0.999

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void output(int num_10, int num_50, int num_100, int num_500) {
	if (num_10 != 0) {
		cout << "10 " << num_10 << endl;
	}
	if (num_50 != 0) {
		cout << "50 " << num_50 << endl;
	}
	if (num_100 != 0) {
		cout << "100 " << num_100 << endl;
	}
	if (num_500 != 0) {
		cout << "500 " << num_500 << endl;
	}
}

int main(void) {
	int num = 0;
	while (1) {
		double sum;
		cin >> sum;
		if (sum == 0) {
			break;
		}
		if (num > 0) {
			cout << endl;
		}
		num++;
	
		vector<int> purse(4, 0);
		for (int i = 0; i < 4; i++) {
			int tmp;
			cin >> tmp;
			purse[i] = tmp;
		}

		int num_10 = 0;
		for (int i = sum / 10 + D; i >= 0; i -= 5) {
			if (i <= purse[0]) {
				num_10 = i;
				sum -= num_10 * 10;
				purse[0] -= i;
				break;
			}
		}
		int num_50 = 0;
		for (int i = sum / 50 + D; i >= 0; i -= 2) {
			if (i <= purse[1]) {
				num_50 = i;
				sum -= num_50 * 50;
				purse[1] -= i;
				break;
			}
		}
		int num_100 = 0;
		for (int i = sum / 100 + D; i >= 0; i -= 5) {
			if (i <= purse[2]) {
				num_100 = i;
				sum -= num_100 * 100;
				purse[2] -= i;
				break;
			}
		}
		int num_500 = 0;
		for (int i = sum / 500 + D; i >= 0; i--) {
			if (i <= purse[3]) {
				num_500 = i;
				sum -= num_500 * 500;
				purse[3] -= i;
				break;
			}
		}

		int change_50 = 0;
		while (1) {
			if (purse[0] >= 5) {
				purse[0] -= 5;
				purse[1] += 1;
				change_50++;
			} else {
				break;
			}
		}
		int change_100 = 0;
		while (1) {
			if (purse[1] >= 2) {
				purse[1] -= 2;
				purse[2] += 1;
				change_100++;
			} else {
				break;
			}
		}
		int change_500 = 0;
		while (1) {
			if (purse[2] >= 5) {
				purse[2] -= 5;
				change_500++;
			} else {
				break;
			}
		}

		num_10 += change_50*5;
		if (change_100*2 > change_50) {
			num_50 += change_100*2 - change_50;
		}
		if (change_500*5 > change_100) {
			num_100 += change_500*5 - change_100;
		}

		output(num_10, num_50, num_100, num_500);
	}

	return 0;
}
