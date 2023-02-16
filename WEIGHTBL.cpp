#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t --) {
		int w1, w2, x1, x2, m;
		cin >> w1 >> w2 >> x1 >> x2 >> m;

		int min = x1 * m;
		int max = x2 * m;

		int diff = w2 - w1;
		if (diff < min || diff > max) {
			cout << 0 << endl;
		} else {
			cout << 1 << endl;
		}

	}

	return 0;
}
