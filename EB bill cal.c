#include <stdio.h>
void main()
{
    int units = 0, cal, u;
    printf("EB BILL CALCULATION");
    printf("\nEnter the units consumed:");
    scanf("%d", &units);
    if (units > 0 && units <= 100)
    {
        cal = 20 + (units * 1.5);
        printf("Your bill amount %d", cal);
    }
    else if (units <= 200)
    {
        cal = 20 + ((units-100) * 1.5);
        printf("Your bill amount %d", cal);
    }
    else if (units <= 500)
    {
        cal = (30 + (100 * 2)) + ((units - 200) * 3);
        printf("Your bill amount %d", cal);
    }
    else if (units >= 500)
    {
        cal = (50 + 100 * 3.5 + 300 * 4.6) + ((units - 500) * 6.6);
        printf("Your bill amount %d", cal);
    }
    else
        printf("Error");
}
