#include <stdio.h>

int main()
{
    int x, i, sum = 0;
    scanf("%d", &x);
    if (x <= 15)
    {
        for (i = 0; i < x; i++)
        {
            int a[x];
            scanf("%d", &a[i]);
            sum += a[i];
        }
        printf("The sum of elements of arrays is %d",sum);
    }

    return 0;
}