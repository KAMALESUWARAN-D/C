#include <stdio.h>
#include <string.h>
void main()
{
    char str1[25], str2;
    printf("Check Polindrome or Not");
    printf("\nEnter the word:");
    str2 = gets(str1);
    strrev(str1);
    if (strcmp(str1, str2))
        printf("The given word is polindrome");
    else
        printf("The given word is not a polindrome");
}
