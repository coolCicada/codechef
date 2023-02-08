#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t --) {
		int n, k;
		cin >> n >> k;

		if (k == 1) {
			if (n % 4 != 0)
				cout << "Ambiguous" << endl;
			else
				cout << "ON" << endl;
		} else {
			if (n % 4 == 0) cout << "OFF" << endl;
			else cout << "ON" << endl;
		}
	}

	return 0;
}
