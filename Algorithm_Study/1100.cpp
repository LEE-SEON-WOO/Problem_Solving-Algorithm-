#include <iostream>
using namespace std;
char board[8][8];
bool bnw[8][8];
int main()
{
	ios::sync_with_stdio(false);
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> board[i][j];
			if (i % 2 == 0 && j % 2 == 0)
				bnw[i][j] = true;
			else if (i % 2 == 1 && j % 2 == 1)
				bnw[i][j] = true;
			else bnw[i][j] = false;
		}
	}
	int whiteF = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (bnw[i][j] && board[i][j] == 'F')
				whiteF++;
		}
	}
	cout << whiteF;
	return 0;
}