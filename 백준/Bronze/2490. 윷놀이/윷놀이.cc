#include <iostream>

using namespace std;

int result, input;
string res = "DCBAE";

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int r = 0; r < 3; r++)
	{
		result = 0;
		for (int c = 0; c < 4; c++)
		{
			cin >> input;
			result += input;
		}
		/* 배열 순서에 따라 문자열 출력 */
		cout << res[result] << '\n';
	}
}
