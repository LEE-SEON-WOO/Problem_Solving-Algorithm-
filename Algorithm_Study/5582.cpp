#include <iostream>
#include <string>
using namespace std;
int table[4001][4001];
int main()
{

	string t1;
	string t2;
	scanf("%s%s", &t1, &t2);
	for (int i = 0; i < t1.size(); i++)
	{
		if (t1[i] == t2[0])
		{
			table[i][0] = 1;
		}
	}
	for (int i = 0; i < t2.size(); i++)
	{
		if (t1[0] == t2[i])
		{
			table[0][i] = 1;
		}
	}
	int r = 0;
	for (int i = 1; i < t1.size(); i++)
	{
		for (int j = 1; j < t2.size(); j++)
		{
			if (t1[i] == t2[j])
			{
				table[i][j] = table[i - 1][j - 1] + 1;
			}
			if (r < table[i][j])
				r = table[i][j];
		}
	}
	printf("%d\n", r);
	return 0;
}