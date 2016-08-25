#include <iostream>
#include <string>
using namespace std;
bool check;
void dps(string str)
{
	if (check == true)
		return;
	if (str.empty())
	{
		check = true;
		return;
	}
	for (int i = 0, j; i < str.size(); i++)
	{
		for (j = i; j < str.size(); j++)
		{
			//cout << "str[" << i << "]= " << str[i] << ", str[" << j << "]= " << str[j] << endl;
			if (str[i] != str[j])
			{

				//cout << "들어옴" << endl;
				break;
			}
		}
		if (j - i >= 2)
		{
			//cout << j << ", " << i << " 들어감" << endl;
			//cout << str.substr(0, i) + str.substr(j) << endl;
			dps(str.substr(0, i) + str.substr(j));
		}
		i = j - 1;
	}
}
int main()
{
	int T;
	cin >> T;
	string str;
	while (T--)
	{
		cin >> str;
		check = false;
		dps(str);
		cout << check << "\n";

	}
}