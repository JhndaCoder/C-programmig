// To check whether a given number is prime or not

#include <stdio.h>

int main()
{
    int a, n, test;
    printf("Enter the number you want to check\n");
    scanf("%d", &n);

    for (a = 2; a < n; a++)
    {
        if (n % a == 0)
        {
            test = 1;
        }
    }
    if (test == 1)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }
    return 0;
}