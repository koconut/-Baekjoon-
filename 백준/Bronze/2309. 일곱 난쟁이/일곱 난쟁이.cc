#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int iNine = 9, iNum[9];
	int iSum = 0;

	for (int i = 0; i < iNine; i++)
	{
		cin >> iNum[i];
		iSum += iNum[i];
	}

	sort(iNum, iNum + iNine);

	for (int i = 0; i < iNine; i++)
	{
		for (int j = 1 + i; j < iNine; j++)
		{
			if (iSum - iNum[i] - iNum[j] == 100)
			{
				for (int k = 0; k < iNine; k++)
				{
					if (i == k || j == k) continue;
					cout << iNum[k] << '\n';
				}
				return 0;
			}
		}
	}

	return 0;
}