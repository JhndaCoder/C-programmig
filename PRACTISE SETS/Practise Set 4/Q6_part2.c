// To sum first n natural numbers using do while loop

#include <stdio.h>

int main()
{
    int a = 1, n, sum = 0;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    do
    {
        sum += a;
        a++;
    } while (a <= n);

    printf("The sum of first %d natural numbers is %d", n, sum);
    return 0;
}