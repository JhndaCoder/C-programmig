// To write factorial of a given number

#include <stdio.h>

int main()
{
    int a, n, product = 1;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (a = n; a > 0; a--)
    {
        product *= a;
    }

    printf("The factorial of %d is equal to %d", n, product);
    return 0;
}