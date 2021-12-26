// to calculate the sum of first n multiples of 8

#include <stdio.h>

int main()
{
    int a, n, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for (a = 0; (a <= n); a++)
    {
        sum += (8 * a);
    }
    printf("The sum of first %d multiples of 8 is %d", n, sum);
    return 0;
}