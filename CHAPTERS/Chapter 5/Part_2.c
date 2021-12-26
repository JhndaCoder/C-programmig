// Functions and recursions

#include <stdio.h>
// Sum is a function which takes a and b as integer and returns a integer as
int sum(int a, int b); // Function prototype declaration

int main()
{
    int x, y;
    x = sum(4, 5); // function call
    printf("The sum is %d\n", x);

    y = sum(8, 12); // function call
    printf("The sum is %d", y);
}
int sum(int a, int b)
{
    int x;
    x = a + b;
    return x;
}