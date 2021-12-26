// To calculate the sum of first n natural numbers

#include <stdio.h>
int sum(int a);
int main()
{
    int n, cal;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    cal = sum(n);
    printf("The sum of first %d natural numbers is %d", n, cal);
    return 0;
}
int sum(int a)
{
    if (a != 0)
    {
        return a + sum(a - 1);
    }
    else
    {
        return a;
    }
}