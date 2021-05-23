#include <stdio.h>
void main()
{
    int n, t1 = 0, t2 = 1, next;
    printf("Fibonacci series");
    printf("\nEnter no of the terms");
    scanf("%d", &n);
    printf("%d\t%d", t1, t2);
    for (int i = 0; i < n; i++)
    {
        next = t1 + t2;
        printf("\t%d", next);
        t1 = t2;
        t2 = next;
    }
}