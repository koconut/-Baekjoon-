#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; // 숫자

	cin >> n;

	for (int i = 0; i < n; i++) {
		list<char> L = {};	
		string s;			// 입력한 문자
		auto p = L.begin();

		cin >> s;

		for (auto c : s) {	// 입력한 문자만큼 반복
			if (c == '<') {
				if (p != L.begin()) p--;
			}
			else if (c == '>') {
				if (p != L.end()) p++;
			}
			else if (c == '-') {
				if (p != L.begin()) {
					p--;
					p = L.erase(p);
				}
			}
			else
				L.insert(p, c);
		}
		
		for (auto c : L) cout << c;
		cout << '\n';
	}
}
