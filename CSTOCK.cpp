#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t --) {
		double s, a, b, c;
		cin >> s >> a >> b >> c;

		double after = s * c / 100;
		s += after;
		if (s >= a && s <= b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}
