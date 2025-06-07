#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, odd = 0, sum = 0, min = 100;

	for (int i = 0; i < 7; i++)
	{
		cin >> x;

		/* And 연산 1이 나오면 홀수 */
		if (x & 1)
		{
			odd += 1;
			sum += x;

			if (x < min)
			{
				min = x;
			}
		}
	}

	if (odd)
	{
		cout << sum << '\n' << min;
	}
	else
	{
		cout << "-1";
	}

}
