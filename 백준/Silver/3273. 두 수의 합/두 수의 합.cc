#include <bits/stdc++.h>

using namespace std;

int a[1000001] = {};
// 각 자연수의 존재 여부를 저장한느 배열, 아래에서 x-a[i]가 1000000보다 큰 영우를 예외처리하기 싫어서 그냥 배열을 최대 200만으로 잡음
bool occur[2000001];
int n, x;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> x;

	for (int i = 0; i < n; i++) {
		// x-a[i]가 존재하는 지 확인 
		if (x - a[i] > 0 && occur[x - a[i]]) ans++;
		occur[a[i]] = true;
	}
	cout << ans;

	return 0;
}

/*
	공간복잡도 O(2000000), 시간복잡도 O(n)에 풀이가 가능. 만약 입력 형식에서
	x가 a 배열보다 먼저 주어졌다면 int a[] 배열은 필요가 없었음.
*/