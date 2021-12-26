// to print n natural numbers in reverse order

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for (int a = n; a > 0; a--)
    {
        printf("%d\n", a);
    }

    return 0;
}