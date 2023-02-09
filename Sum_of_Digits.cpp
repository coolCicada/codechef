#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n --) {
		string s;
		cin >> s;

		int total = 0;
		for (int i = 0; i < s.size(); i ++) {
			total += s[i] - '0';
		}
		cout << total << endl;
	}

	return 0;
}
