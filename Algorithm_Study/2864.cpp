#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
void bigplus(char *store, char *a, char *b)
{
	char t[100] = { 0 };
	int i = strlen(a), j = strlen(b), p, s;
	for (p = 0; i || j; p++)
	{
		s = (i ? a[i - 1] : '0') + (j ? b[j - 1] : '0') - '0' * 2;
		if (s + t[p] > 9)t[p + 1] += (s + t[p]) / 10;
		t[p] = (s + t[p]) % 10;
		if (i > 0)
			i--;
		if (j > 0)
			j--;
	}
	if (!t[p])
		p--;
	for (i = 0; i <= p; i++)
		store[p - i] = t[i] + '0';
	store[p + 1] = 0;
}
int main()
{
	int A, B, C;
	cin >> A >> B;
	C = A + B;
	char cA[7], cB[7], cC[7];
	int kA = 0, kB = 0, kC = 0;
	int tmpA = A, tmpB = B, tmpC = C;
	int Min = 0, Max = 0;
	while (pow(10, ++kA) < A);
	while (pow(10, ++kB) < B);
	while (pow(10, ++kC) < C);
	char At[7], Bt[7], Ct[7];
	memset(At, 0, sizeof(At));
	memset(Bt, 0, sizeof(Bt));
	memset(Ct, 0, sizeof(Ct));
	char At65[7], Bt65[7], Ct65[7];
	memset(At65, 0, sizeof(At65));
	memset(Bt65, 0, sizeof(Bt65));
	memset(Ct65, 0, sizeof(Ct65));
	char At56[7], Bt56[7], Ct56[7];
	memset(At56, 0, sizeof(At56));
	memset(Bt56, 0, sizeof(Bt56));
	memset(Ct56, 0, sizeof(Ct56));
	for (int i = kA - 1; i >= 0; i--)
	{
		At[i] = '0' + tmpA % 10;
		tmpA /= 10;
	}
	for (int i = kB - 1; i >= 0; i--)
	{
		Bt[i] = '0' + tmpB % 10;
		tmpB /= 10;
	}
	bigplus(Ct, At, Bt);//그냥더한경우
	//cout << Ct << "\n";
	tmpA = A, tmpB = B, tmpC = C;
	for (int i = kA - 1; i >= 0; i--)
	{
		if (tmpA % 10 + '0' == '6')
			At65[i] = '5';
		else
			At65[i] = tmpA % 10 + '0';
		tmpA /= 10;
	}
	for (int i = kB - 1; i >= 0; i--)
	{
		if (tmpB % 10 + '0' == '6')
			Bt65[i] = '5';
		else
			Bt65[i] = tmpB % 10 + '0';

		tmpB /= 10;
	}
	bigplus(Ct65, At65, Bt65);	//6인데 5로 변경해서 더한경우
	cout << Ct65 << " ";
	
	////////////////////
	tmpA = A, tmpB = B, tmpC = C;
	for (int i = kA - 1; i >= 0; i--)
	{
		if (tmpA % 10 + '0' == '5')
		{
			At56[i] = '6';
		}
		else
			At56[i] = tmpA % 10 + '0';
		tmpA /= 10;
	}
	for (int i = kB - 1; i >= 0; i--)
	{
		if (tmpB % 10 + '0' == '5')
		{
			Bt56[i] = '6';
		}
		else
			Bt56[i] = tmpB % 10 + '0';
		tmpB /= 10;
	}
	bigplus(Ct56, At56, Bt56);	//5인데 6으로 변경해서 더한경우.
	cout << Ct56 << "\n";
	//////////////////////////////
	//char Cs56[7], Cs65[7];
	//memset(Cs56, 0, sizeof(Cs56));
	//memset(Cs65, 0, sizeof(Cs65));
	//for (int i = kC - 1; i >= 0; i--)
	//{
	//	if (Ct[i] == '5')
	//		Cs56[i] = '6';
	//	else 
	//		Cs56[i] = Ct[i];
	//}//그냥더한거에 5->6으로
	//cout << Cs56 << endl;
	//for (int i = kC - 1; i >= 0; i--)
	//{
	//	if (Ct[i] == '6')
	//		Cs56[i] = '5';
	//	else
	//		Cs56[i] = Ct[i];
	//}//그냥더한거에 6->5로
	//cout << Cs65 << endl;
	///////////////
	//char Cs5656[7], Cs5665[7];
	//memset(Cs5656, 0, sizeof(Cs5656));
	//memset(Cs5665, 0, sizeof(Cs5665));
	//for (int i = strlen(Cs56) - 1; i >= 0; i--)
	//{
	//	if (Ct56[i] == '5')
	//		Cs5656[i] = '6';
	//	else
	//		Cs5656[i] = Ct56[i];
	//}//56, 56
	//for (int i = strlen(Cs56) - 1; i >= 0; i--)
	//{
	//	if (Ct56[i] == '6')
	//		Cs5665[i] = '5';
	//	else
	//		Cs5665[i] = Ct56[i];
	//}//65, 65
	/////////////////////
	//char Cs6556[7], Cs6565[7];
	//memset(Cs6556, 0, sizeof(Cs6556));
	//memset(Cs6565, 0, sizeof(Cs6565));
	//for (int i = strlen(Cs65) - 1; i >= 0; i--)
	//{
	//	if (Ct65[i] == '5')
	//		Cs6556[i] = '6';
	//	else
	//		Cs6556[i] = Ct65[i];
	//}//56 56
	//for (int i = strlen(Cs65) - 1; i >= 0; i--)
	//{
	//	if (Ct65[i] == '6')
	//		Cs6565[i] = '5';
	//	else
	//		Cs6565[i] = Ct65[i];
	//}//65 65
	//vector<int> mV;
	//mV.push_back(atoi(Cs56));
	//mV.push_back(atoi(Cs65));
	//mV.push_back(atoi(Cs5656));
	//mV.push_back(atoi(Cs5665));
	//mV.push_back(atoi(Cs6556));
	//mV.push_back(atoi(Cs6565));
	//sort(mV.begin(), mV.end());
	//for (auto i : mV)
	//	cout << i << " ";
	//cout << endl;
	//cout << mV[0] << " " << mV[mV.size() - 1];
	return 0;
}