#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number, input;
	int i;
	int sum = 0;
	printf("Enter your number : ");
	scanf("%d", &input);

	for (number = 2; number <= input; number++)
	{
		for (i = 1; i < number; i++)
		{
			if (number % i == 0)
			{
				sum += i;
			}
		}
		if (number == sum)
		{
			printf("P(%d) = %d\n", number, sum);
		}
		sum *= 0;
	}
	return 0;
}