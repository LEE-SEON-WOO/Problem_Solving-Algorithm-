#include<cstdio>

int main()
{
	int arr[8];
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);
	}
	int a = 0;
	int b = 0;
	for (int i = 0; i < 8; i++)
	{
		if (arr[i]==(i+1))
			a++;
		if (arr[i] == 8 - i)
			b++;
	}
	//87654312
	//12345678
	if (a == 8)
	{
		printf("ascending");
	}
	else if (b == 8)
	{
		printf("descending");
	}
	else
	{
		printf("mixed");
	}
	return 0;
}