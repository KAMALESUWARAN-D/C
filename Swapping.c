#include <stdio.h>
int a, b;
void main()
{
    printf("\nEnter any two values:");
    scanf("%d%d", &a, &b);
    printf("\nBefore swapping the two values are %d %d", a, b);
    swap(a, b);
    printf("\nAfter swapping the two values are %d %d", a, b);
}

swap(int x, int y)
{
    b=x;
    a=y;
}
