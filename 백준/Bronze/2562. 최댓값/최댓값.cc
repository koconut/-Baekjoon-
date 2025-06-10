#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[10];
	int num = 0;
	int count = 0;
	
	for (int i = 1; i <= 9; i++) {
		cin >> arr[i];
		
		if (num < arr[i]) {
			num = arr[i];
			count = i;
		}
	}

	cout << num << "\n" << count;

	return 0; 
} 