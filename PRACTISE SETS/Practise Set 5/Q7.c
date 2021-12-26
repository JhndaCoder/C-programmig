// To print a specific pattern in first n lines

#include <stdio.h>
int pattern(int a);
int main()
{
    int n, star;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    star = pattern(n);
    return 0;
}
int pattern(int a)
{
    int i, j;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}