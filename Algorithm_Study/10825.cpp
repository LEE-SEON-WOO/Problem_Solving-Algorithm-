#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


struct student {
	string name;
	int kor;
	int eng;
	int math;
}typedef st;
st s[100000];
bool cmp(st s1, st s2)
{
	if (s1.kor > s2.kor)
	{
		return true;
	}
	else if (s1.kor < s2.kor)
	{
		return false;
	}
	else if (s1.kor == s2.kor)
	{
		if (s1.eng > s2.eng)
		{
			return false;
		}
		else if (s1.eng < s2.eng)
		{
			return true;
		}
		else if (s1.eng == s2.eng)
		{
			if (s1.math > s2.math)
			{
				return true;
			}
			else if (s1.math < s2.math)
				return false;
			else if (s1.math == s2.math)
			{
				if (s1.name > s2.name)
				{
					return false;
				}
				else
					return true;
			}
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for(size_t i=0; i<N; i++)
	{
		cin >> s[i].name >> s[i].kor >> s[i].eng >> s[i].math;
	}
	sort(s, s + N, cmp);
	for (size_t i = 0; i<N; i++)
	{
		cout << s[i].name << '\n';
	}
	return 0;
}