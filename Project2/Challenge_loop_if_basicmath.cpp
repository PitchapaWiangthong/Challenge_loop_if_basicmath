#include<stdio.h>
int main()
{
	int a, b, n;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		n = a - b;
		for (int i = 0; i < n + 1; i++)
		{
			printf("%d ", a);
			a--;
		}
	}
	else
	{
		n = b - a;
		for (int i = 0; i < n + 1; i++)
		{
			printf("%d ", a);
			a++;
		}
	}
	return 0;
}
	