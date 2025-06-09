#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int CallCount, CallTime[21];
	int ResultY = 0, ResultM = 0;

	cin >> CallCount;
	for (int i = 0; i < CallCount; i++) cin >> CallTime[i];

	// Y 30 -> 10
	for (int i = 0; i < CallCount; i++) {
		int num = 1;
		num += CallTime[i] / 30;

		if (num == 1)
			ResultY += 10;
		else
			ResultY += 10 * num;
	}
	// M 60 -> 15
	for (int i = 0; i < CallCount; i++) {
		int num = 1;
		num += CallTime[i] / 60;

		if (num == 1)
			ResultM += 15;
		else
			ResultM += 15 * num;
	}

	if (ResultY < ResultM)
		cout << "Y" << " " << ResultY;
	else if (ResultM < ResultY)
		cout << "M" << " " << ResultM;
	else
		cout << "Y M" << " " << ResultY;

	return 0;
} 