#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string Init;
	
	cin >> Init;

	list<char> L;


	for (auto c : Init) L.push_back(c);
	auto cursor = L.end();

	int q;

	cin >> q;

    while (q--) {
        char op;
        cin >> op;
        if (op == 'P') {
            // P의 경우 추가 글자를 넣음
            char add;
            cin >> add;
            L.insert(cursor, add);
        }
        else if (op == 'L') {
            if (cursor != L.begin()) cursor--;  // 예외처리
        }
        else if (op == 'D') {
            if (cursor != L.end()) cursor++;    // 예외처리
        }
        else { // 'B'
            if (cursor != L.begin()) {
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }

    for (auto c : L) cout << c;
}
