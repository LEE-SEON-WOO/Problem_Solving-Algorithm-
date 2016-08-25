#include <iostream>
using namespace std;

int arrA[10][2];
int arrB[10][2];
bool winflag = 0;
int main()
{
	ios::sync_with_stdio(false);
	for (int i = 0; i < 10; i++)
	{
		cin >> arrA[i][0];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> arrB[i][0];
	}
	for (int i = 0; i < 10; i++)
	{
		if (arrA[i][0] == arrB[i][0])
		{
			arrA[i][1] = arrB[i][1] = 1;
		}
		else if (arrA[i][0] > arrB[i][0])
		{
			arrA[i][1] = 3;
			arrB[i][1] = 0;
			winflag = true;
		}
		else if (arrA[i][0] < arrB[i][0])
		{
			arrA[i][1] = 0;
			arrB[i][1] = 3;
			winflag = false;
		}
	}
	int Asum = 0;
	int Bsum = 0;
	for (int i = 0; i < 10; i++)
	{
		Asum += arrA[i][1];
		Bsum += arrB[i][1];
	}
	cout << Asum << ' ' << Bsum << endl;
	if (Asum > Bsum) cout << 'A' << endl;
	else if (Asum < Bsum) cout << 'B' << endl;
	else if (Asum == Bsum)
	{
		if (Asum == 10)
			cout << 'D' << endl;
		else
		{
			if (winflag)
				cout << 'A' << endl;
			else
				cout << 'B' << endl;
		}
	}
	return 0;
}