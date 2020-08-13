#include<stdio.h>
#include<cmath>
int main()
{
	int a, b, n;
	float x, y, sd{}, av, sum = 0, sumsd = 0;
	scanf_s("%d %d", &a, &b);
	n = abs(a - b) + 1;
	if (a == b)
	{
		printf("Error");
		return 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d ", a);
			sum += a;
			sumsd += a * a;
			x = n * sumsd - pow(sum, 2);
			y = n * (n - 1);
			sd = sqrt(x / y);

			if (a > b)
			{
				a--;
			}
			else
			{
				a++;
			}
		}
	}
	printf("\nAverage = %.1f", (sum) / n);
	printf("\nSD = %.2f", sd);
	return 0;
}