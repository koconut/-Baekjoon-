#include <bits/stdc++.h>

using namespace std;

int func1(int a, int b, int c) {
	int temp;
	// 3 2 1
	if (a > b) {
		temp = a;
		a = b;
		b = temp; // 2 3 1
	}

	if (a > c) {
		temp = a;
		a = c;
		c = temp; // 1 3 2
	}

	if (b > c) {
		temp = b;
		b = c;
		c = temp; // 1 2 3
	}

	cout << a << " " << b << " " << c;

	return 0;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;

	cin >> a >> b >> c;

	func1(a, b, c);

	return 0;
} 