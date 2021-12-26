// To calculate nth element of fibonaci series using recursions

#include <stdio.h>
int fib(int n);
int main()
{
    int num, x;
    printf("Enter the value of n\n");
    scanf("%d", &num);
    x = fib(num);
    printf("The %dth term of fibbonacci series is %d", num, x);
    return 0;
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }

    else if (n == 1)
    {
        return 1;
    }

    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}