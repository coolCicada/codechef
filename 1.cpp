#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n --) {
		string str;
		cin >> str;

		int count = 0;
		for (int i = 0; i < str.size(); i ++) {
			if (str[i] == '4') count ++;
		}

		cout << count << endl;
	}

	return 0;
}
