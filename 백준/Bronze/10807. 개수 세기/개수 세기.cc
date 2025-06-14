#include <iostream>

using namespace std;

int main()
{
	int n, v;
	int count = 0;
	int arr[100] = { 0, };

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> v;
	for (int i = 0; i < n; i++)
	{
		if ( v == arr[i])
			count++;
	}

	cout << count;

	return 0;
}