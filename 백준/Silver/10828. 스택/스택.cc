#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int N, iNum;
	string str;
	stack<int> st;

	cin >> N;

	while (N--)
	{
		cin >> str;

		if (str == "push")
		{
			cin >> iNum;
			st.push(iNum);
		}
		else if (str == "pop")
		{
			if (st.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << st.top() << endl;
				st.pop();
			}
		}
		else if (str == "size")
		{
			cout << st.size() << endl;
		}
		else if (str == "empty")
		{
			cout << st.empty() << endl;
		}
		else if (str == "top")
		{
			if (st.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << st.top() << endl;
			}
		}
	}

	return 0;
}
