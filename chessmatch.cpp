#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t --) {
		int n, a, b;
		cin >> n >> a >> b;

		cout << (2 * 180 + 2 * 2 * n / 2 - a - b) << endl;
	}

	return 0;
}
