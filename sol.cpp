#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y;
		cin >> x >> y;
		pair<int, int> p{0, 0};
		if (y < x) {
			cout << p.first << " " << p.second << '\n';
			continue;
		} else if (y == x) {
			cout << 1 << " " << 1 << '\n';
			continue;
		}
		// x(b^a) = y
		// b^a = x/y
		// log(b^a) = log(y/x)
		// a(log(b)) = log(y/x)
		// a = log(y/x)/log(b)
		for (int num = 0; num < 100; num++) {
			int a = log(y / x) / log(num);
			if (x * pow(num, a) == y) {
				p = make_pair(a, num);
				break;
			}
		}
		cout << p.first << " " << p.second << '\n';
	}
	return 0;
}
