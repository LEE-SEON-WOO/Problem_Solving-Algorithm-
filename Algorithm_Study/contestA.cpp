#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int arr[200001];
int main()
{
	ios::sync_with_stdio(false);
	memset(arr, 0, sizeof(arr));
	int n;
	cin >> n;
	string str;
	vector<int> v;
	cin >> str;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int temp = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == 'R'&&str[i + 1] == 'L')
		{
			//cout << arr[i + 1] << " " << arr[i] << endl;
			temp = arr[i + 1] - arr[i];
			v.push_back(abs(temp / 2));
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] < temp)
			temp = v[i];
	}

	if (temp == INT_MAX)
		cout << -1 << endl;
	else
		cout << temp << endl;
	return 0;
}