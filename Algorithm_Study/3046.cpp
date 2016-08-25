#include <iostream>
using namespace std;
int arr1[5];
int main()
{
	int S;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> S;
			arr1[i] += S;
		}
	}
	int idx = 0, Max = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr1[i] > Max)
		{
			idx = i;
			Max = arr1[i];
		}
	}
	cout << idx+1<<" " << Max << "\n";
	return 0;
}