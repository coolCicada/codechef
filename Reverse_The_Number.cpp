#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t --) {
		int n;
		cin >> n;

		int r = 0;
		
		while (n) {
			r = r * 10 + n % 10;
			n /= 10;
		}

		cout << r << endl;
	}

	return 0;
}
