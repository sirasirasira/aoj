#include <iostream>
#include <vector>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::map;

struct Pair {
	public:
		int a, b;
		void set(int, int);
};
inline void Pair::set(int _a, int _b) {
	a = _a;
	b = _b;
}
inline bool operator< (const Pair& left, const Pair& right) {
	if (left.a != right.a) {
		return (left.a < right.a);
	} else {
		return (right.b < left.b);
	}
}
inline bool operator== (const Pair& left, const Pair& right) {
	if (left.a == right.a and left.b == right.b) {
		return true;
	}
}

int main(void) {
	while (1) {
		int M, T, P, R;
		cin >> M >> T >> P >> R;
		if (M == 0 and T == 0 and P == 0 and R == 0) {
			break;
		}

		vector<int> correct_num(T, 0);
		vector<int> time(T, 0);
		vector<int> penalty(T, 0);
		vector<vector<int>> wrong(T, vector<int>(P, 0));
		map<Pair, vector<int>> rank;
		for (int i = 0; i < R; i++) {
			int m, t, p, j;
			cin >> m >> t >> p >> j;
			t--;
			p--;

			if (j == 0) {
				//time[t] = m;
				time[t] += m;
				correct_num[t]++;
				if (wrong[t][p] != 0) {
					penalty[t] += wrong[t][p];
				}
			} else {
				wrong[t][p]++;
			}
		}
		for (int i = 0; i < T; i++) {
			time[i] += 20 * penalty[i];
			Pair pair;
			pair.set(correct_num[i], time[i]);
			rank[pair].push_back(i+1);
		}

		for (auto itr_map = rank.rbegin(); itr_map != rank.rend(); ++itr_map) {
			//cout << itr_map->first.a << ":" << itr_map->first.b << endl;
			if (itr_map != rank.rbegin()) {
				cout << ",";
			}
			for (auto itr_vec = itr_map->second.rbegin(); itr_vec != itr_map->second.rend(); ++itr_vec) {
				if (itr_vec != itr_map->second.rbegin()) {
					cout << "=";
				}
				cout << *itr_vec;
				//cout << endl;
			}
		}
		cout << endl;
	}
	return 0;
}
