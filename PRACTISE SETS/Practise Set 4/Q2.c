// To find multiplication table of a given number n in reverse order

#include <stdio.h>

int main()
{
    int a, n;
    printf("Enter your number\n");
    scanf("%d", &n);

    for (a = 10; a > 0; a--)
    {
        printf("%d X %d = %d\n", n, a, (n * a));
    }

    return 0;
}