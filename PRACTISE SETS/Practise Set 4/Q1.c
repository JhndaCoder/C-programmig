// To find multiplication table of a given number n

#include <stdio.h>

int main()
{
    int n, a;
    printf("Enter your number\n");
    scanf("%d", &n);
    for (a = 1; a < 11 ; a++)
    {
    printf("%d X %d = %d\n", n, a, (n*a));
    }
    return 0;
}