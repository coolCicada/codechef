#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t --) {
		int n, k;
		cin >> n >> k;

		k = (1 + k) * k / 2;
		if (n >= k) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
