#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int cnt = 0;

	string s;

	while (n != 0)
	{
		s = to_string(n);

		for (int i = 0; i < s.length(); )
		{
			if (s[i] == '1')
			{
				s.erase(s.begin() + i);
				cnt++;
			}
			else
			{
				i++;
			}
		}

		if (s != "")
		{
			n = stoi(s);
		}
		else
		{
			n = 0;
		}

		if (n != 0)
		{
			n--;
			cnt++;
		}
	}

	cout << cnt;
}

