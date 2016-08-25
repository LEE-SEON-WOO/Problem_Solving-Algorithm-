#include <iostream>
#include <string>
int main()
{
	int n;
	scanf("%d", &n);
	int c = 0, nc = 0;
	int v;
	while (n--)
	{
		scanf("%d", &v);
		if (v == 0)
			nc++;
		else c++;
	}
	if (nc > c)
		printf("Junhee is not cute!");
	else printf("Junhee is cute!");
}