#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct st {
	int age;
	int soon;
	string name;
}typedef st;
bool cmp(st s1, st s2)
{
	if (s1.age > s2.age)
		return false;
	else if (s1.age < s2.age)
		return true;
	else
	{
		if (s1.soon > s2.soon)
			return false;
		else
			return true;
		
	}
}
st s[100000];
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (size_t i = 0; i < N; i++)
	{
		cin >> s[i].age >> s[i].name;
		s[i].soon = i;
	}
	sort(s, s + N, cmp);
	for (size_t i = 0; i < N; i++)
	{
		cout << s[i].age <<' '<< s[i].name << '\n';
	}
	return 0;
}