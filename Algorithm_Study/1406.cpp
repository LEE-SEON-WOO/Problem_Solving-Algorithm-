#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int idx = 0, N;
	char input, C;
	cin >> str;
	cin >> N;
	idx = str.size();
	while (N--)
	{
		cin >> input;
		switch (input)
		{
		case 'P':
			cin >> C;
			str.insert(str.begin() + idx++, C);
			continue;
		case 'L':
			if (idx != 0)
				idx--;
			continue;
		case 'D':
			if (idx != str.size())
				idx++;
			continue;
		case 'B':
			if (idx > 0)
				str.erase(str.begin() + --idx);
			continue;
		}

	}
	cout << str;
}