#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int And_func(char A, char B)
{
	if ((A == '1') && (B == '1'))
	{
		return 1;
	}
	else return 0;
}
int Or_func(char A, char B)
{
	if (A == '1' || B == '1')
		return 1;
	else return 0;
}
int Exor_func(char A, char B)
{
	if (A == '0' && B == '1')
		return 1;
	else if (A == '1'&&B == '0')
		return 1;
	else return 0;
}
int Not_func(char A)
{
	if (A == '0')
		return 1;
	else if (A == '1')
		return 0;
}
string A;
string B;
int main()
{
	ios::sync_with_stdio(false);
	cin >> A >> B;
	for (size_t i = 0; i < A.size(); i++)
	{
		cout << And_func(A[i], B[i]);
	}
	cout << endl;
	for (size_t i = 0; i < A.size(); i++)
	{
		cout << Or_func(A[i], B[i]);
	}
	cout << endl;
	for (size_t i = 0; i < A.size(); i++)
	{
		cout << Exor_func(A[i], B[i]);
	}
	cout << endl;
	for (size_t i = 0; i < A.size(); i++)
	{
		cout << Not_func(A[i]);
	}
	cout << endl;
	for (size_t i = 0; i < A.size(); i++)
	{
		cout << Not_func(B[i]);
	}
	cout << endl;
	return 0;
}