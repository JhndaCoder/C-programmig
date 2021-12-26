// To find greatest of four numbers entered by a user

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter the first number\n");
    scanf("%d", &a);

    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("Enter the third number\n");
    scanf("%d", &c);

    printf("Enter the fourth number\n");
    scanf("%d", &d);

    if ((a > b) && (a > c) && (a > d))
    {
        printf("First number is the greatest");
    }

    else if ((b > a) && (b > c) && (b > d))
    {
        printf("Second number is the greatest");
    }

    else if ((c > b) && (c > a) && (c > d))
    {
        printf("Third number is the greatest");
    }

    else
    {
        printf("Fourth number is the greatest");
    }

    return 0;
}