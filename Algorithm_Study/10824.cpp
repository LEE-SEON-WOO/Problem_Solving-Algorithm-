#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string stra, strb, strc, strd;
	cin >> stra >> strb >> strc >> strd;
	stra.append(strb);
	strc.append(strd);
	long long int a, b;
	a = (long long)atoll(stra.c_str());
	b = (long long)atoll(strc.c_str());
	cout << a + b << endl;

	return 0;
}