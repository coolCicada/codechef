#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t --) {
		int a, b, x;
		cin >> a >> b >> x;

		int tar = b - a;
		int ha = tar % x ? 1 : 0;
		cout << tar / x + ha << endl;
	}

	return 0;
}
