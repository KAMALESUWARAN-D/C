#include <stdio.h>
void main()
{
    char c;
    printf("Enter the alphapet:");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("\nYou entered alphapet is vowel");
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("\nYou entered alphapet is vowel");
    else
        printf("\nYou entered alphapet is not vowel");
}
