// To reverse an array

#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        temp = a[1];
        a[i] = a[5 - i - 1];
        a[5 - i - 1] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
switch (expression)
{
case /* constant-expression */:
    /* code */
    break;

default:
    break;
}