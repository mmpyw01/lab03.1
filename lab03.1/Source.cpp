#include<stdio.h>
int main()
{
	int num, a, b, i = 0, k=0, sum = 0, sum2 = 0;
	int array_a[100], array_b[100];

	printf("Enter number : ");
	scanf("%d", &num);
	num = num * 10;


	while (num != 0)
	{
		a = num % 10;
		array_a[i] = a;
		num = num / 10;
		i++;
	}

	for (int j = i - 1; j > 0; j--)
	{
		sum = (sum + array_a[j]);
	}
	printf("(%d)", sum);

	while (sum != 0)
	{
		b = sum % 10;
		array_b[k] = b;
		sum = sum / 10;
		k++;
	}

	for (int m = k - 1; m > 0; m--)
	{
		sum2 = (sum2 + array_b[m]);
	}
	printf("\n(%d)", sum2);
}
