#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t --) {
		int x;
		cin >> x;

		cout << x - (x / 2 + x % 2) % 2 << endl;
	}

	return 0;
}
