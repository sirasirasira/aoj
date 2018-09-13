#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(void) {
	while (1) {
		int member_num;
		cin >> member_num;
		if (member_num == 0) {
			break;
		}

		vector<vector<int>> member_info;
		for (int i = 0; i < member_num; i++) {
			vector<int> info;
			int info_num;
			cin >> info_num;
			for (int j = 0; j < info_num; j++) {
				int tmp;
				cin >> tmp;
				info.push_back(tmp);
			}
			member_info.push_back(info);
		}

		int leak_num;
		cin >> leak_num;
		vector<int> leak;
		for (int i = 0; i < leak_num; i++) {
			int tmp;
			cin >> tmp;
			leak.push_back(tmp);
		}

		vector<bool> flag(member_num, true);
		int flag_num = member_num;
		for (auto leak_itr = leak.begin(); leak_itr != leak.end(); ++leak_itr) {
			for (int i = 0; i < member_num; i++) {
				if (!flag[i]) {
					continue;
				}

				bool hit = false;
				for (auto info_itr = member_info[i].begin(); info_itr != member_info[i].end(); ++info_itr) {
					if (*info_itr == *leak_itr) {
						hit = true;
						break;
					}
				}
				if (hit == false) {
					flag[i] = false;
					flag_num--;
				}
			}
		}

		if (flag_num != 1) {
			cout << -1 << endl;
		} else {
			for (int i = 0; i < member_num; i++) {
				if (flag[i]) {
					cout << i + 1 << endl;
					break;
				}
			}
		}
	}
	return 0;
}
