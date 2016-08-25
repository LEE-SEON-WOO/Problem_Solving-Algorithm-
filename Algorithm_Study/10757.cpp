#include <cstdio>
#include <cstring>
using namespace std;
void bigplus(char *store, char *a, char *b)
{
	char t[1000000] = { 0 };
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
char i[1000000] = { 0 }, j[1000000] = { 0 }, t[1000000] = { 0 };
int main()
{
	scanf("%s%s", i, j);
	bigplus(t, j, i);
	printf("%s\n", t);
	return 0;
}