#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t --) {
		int n;
		cin >> n;

		int cnt = 0;
		while (n) {
			if (n % 10 == 4) cnt ++;
			n /= 10;
		}

		cout << cnt << endl;
	}

	return 0;
}
