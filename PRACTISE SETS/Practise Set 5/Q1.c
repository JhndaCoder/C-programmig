// To find average of 3 numbers using functions

#include <stdio.h>
float avg(int a, int b, int c);

int main()
{
    int a, b, c;
    float d;

    printf("Enter the first number\n");
    scanf("%d", &a);

    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("Enter the third number\n");
    scanf("%d", &c);

    d = avg(a, b, c);

    printf("The mean of the given numbers is %f", d);

    return 0;
}
float avg(int a, int b, int c)
{
    int x;
    x = (a + b + c) / 3;
    return x;
}