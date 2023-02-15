#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t --) {
		int n, s;
		cin >> n >> s;

		if (n >= s) {
			cout << s << endl;
		} else {
			cout << abs(s - 2 * n) << endl;
		}
	}

	return 0;
}
