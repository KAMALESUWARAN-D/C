#include <stdio.h>
void main()
{
	int i, n, fact = 1;
	printf("**Factorial**");
	printf("\nEnter the number:");
	scanf("%d", &n);
	if (n == 0)
		printf("Factorial is 1");
	else if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			fact = fact * i;
		}
		printf("Factorial is %d", fact);
	}
	else
		printf("Error");
}
