#include <iostream>

using namespace std;

int main(void)
{
	int a;

	cin >> a;

	if (a>=90 && a<=100)
	{
		cout << "A";
	}
	else if (a>=80 && a<90)
	{
		cout << "B";
	}
	else if (a>=70 && a<80)
	{
		cout << "C";
	}
	else if (a>=60 && 70)
	{
		cout << "D";
	}
	else
	{
		cout << "F";
	}

	return 0;
}