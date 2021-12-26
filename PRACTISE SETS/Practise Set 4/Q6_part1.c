// To sum first n natural numbers using for loop

#include <stdio.h>

int main()
{
    int a, n, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for (a = 0; a <= n; a++)
    {
        sum += a;
    }
    printf("The sum of first %d natural numbers is %d", n, sum);
    return 0;
}