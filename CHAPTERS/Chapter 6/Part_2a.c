// Call by value

#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4, b = 7;
    printf("The value of 4+7 id %d\n", sum(a, b));
    printf("The value of a and b after function call is %d and %d\n", a, b);
    return 0;
}
int sum(int a, int b)
{
    int x;
    a = 23432;
    b = 3434;
    x = a + b;
    return x;
}