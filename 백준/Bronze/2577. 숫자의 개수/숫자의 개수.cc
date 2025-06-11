#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	int Result = 0;
	int arr[10] = {};

	cin >> a >> b >> c;
	Result = a * b * c;

	string str = to_string(Result);

	for (int i = 0; i < str.size(); i++) {
		if (0 == str[i] - '0')
			arr[0]++;
		else if (1 == str[i] - '0')
			arr[1]++;
		else if (2 == str[i] - '0')
			arr[2]++;
		else if (3 == str[i] - '0')
			arr[3]++;
		else if (4 == str[i] - '0')
			arr[4]++;
		else if (5 == str[i] - '0')
			arr[5]++;
		else if (6 == str[i] - '0')
			arr[6]++;
		else if (7 == str[i] - '0')
			arr[7]++;
		else if (8 == str[i] - '0')
			arr[8]++;
		else if (9 == str[i] - '0')
			arr[9]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}