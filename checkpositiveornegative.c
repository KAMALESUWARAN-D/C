#include <stdio.h>
void main()
{
    int n;
    printf("Check positive OR negative");
    printf("\nEnter thr number:");
    scanf("%d", &n);
    if (n >= 0)
        printf("The number is positive");
    else
        printf("The number is negative");
}
