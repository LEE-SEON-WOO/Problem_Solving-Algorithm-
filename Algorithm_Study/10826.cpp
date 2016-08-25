#include <iostream>
#include <cstring>
using namespace std;
#define StoD(X) (X==0? 0:X-'0')
char a[3][100002] = { 0 };
void reverse(char *arr, int len)
{
	char temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	int n, len, up = 0;
	cin >> n;
	a[0][0] = '0';
	a[1][0] = '1';
	a[2][0] = '1';
	for (int i = 1; i < n; i++)
	{
		//memset(a[2], 0, sizeof(a[2]));
		if (strlen(a[0]) > strlen(a[1]))
		{
			len = strlen(a[0]);
		}
		else
		{
			len = strlen(a[1]);
		}
		reverse(a[0], strlen(a[0]));
		reverse(a[1], strlen(a[1]));
		for (int i = 0;i <= len; i++)
		{
			a[2][i] = (StoD(a[0][i]) + StoD(a[1][i]) + up) % 10 + '0';
			if ((StoD(a[0][i]) + StoD(a[1][i]) + up) > 9)
				up = 1;
			else up = 0;
		}

		if (a[2][len] == '0')
			a[2][len] = 0;
		reverse(a[0], strlen(a[0]));
		reverse(a[1], strlen(a[1]));
		reverse(a[2], strlen(a[2]));
		//for (int j = 0; j < 3; j++)
		//{
		//	cout << i <<"¹øÂ° : " << a[j] << " ";
		//}
		//cout << endl;
		//reverse(a[2], strlen(a[2]));
		strcpy(a[0], a[1]);
		strcpy(a[1], a[2]);
	}
	if (n == 0)
		cout << "0\n";
	else if (n == 1)
		cout << "1\n";
	else cout << a[2] << "\n";
	return 0;
}