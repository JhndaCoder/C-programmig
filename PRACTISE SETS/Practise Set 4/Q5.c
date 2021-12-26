// To sum first n natural numbers using while loop

#include <stdio.h>

int main()
{
    int a = 1, n, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    while (a <= n)
    {
        sum += a;
        a++;
    }

    printf("The sum of first %d natural numbers is %d", n, sum);
    return 0;
}