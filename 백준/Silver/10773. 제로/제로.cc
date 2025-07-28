#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int K;
	cin >> K;

	stack<int> S;

	while (K--) {
		int Num;
		cin >> Num;

		if (Num == 0)
			S.pop();
		else
			S.push(Num);
	}

	int Sum = 0;
	int Size = S.size();
	for (int i = 0; i < Size; i++) {
		Sum += S.top();
		S.pop();
	}

	cout << Sum;
}