#include<bits/stdc++.h>

using namespace std;

int main() {
	int a;
	double b;
	cin >> a >> b;

	if (a % 5 == 0 && (b >= a + 0.5)) {
		printf("%.2lf", b - a - 0.5);
	} else {
		printf("%.2lf", b);
	}

	return 0;
}


