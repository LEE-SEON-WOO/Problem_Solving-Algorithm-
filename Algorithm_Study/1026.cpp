#include <iostream>
#include <algorithm>
using namespace std;
#define INF 987654321
int arrA[50];
int arrB[50];
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arrA[i];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> arrB[i];
	}
	sort(arrA, arrA + N);
	sort(arrB, arrB + N);
	reverse(arrA, arrA + N);
	int sum = 0;
	//for (int i = 0; i < N; i++)
	//{
	//	cout << arrA[i] <<" ";
	//}
	//cout << endl;
	//for (int i = 0; i < N; i++)
	//{
	//	cout << arrB[i] << " ";
	//}
	//cout << endl;
	for (int i = 0; i < N; i++)
	{
		sum += arrA[i] * arrB[i];
	}
	cout << sum << "\n";
	return 0;
}