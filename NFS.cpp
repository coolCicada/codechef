#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t --) {
		int u, v, a, s;
		cin >> u >> v >> a >> s;
		int c = u * u - 2 * a * s;
		if (c <= 0) {
			cout << "YES" << endl;
			continue;
		}
		double r = sqrt(c);
		if (r <= v) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	return 0;

}
