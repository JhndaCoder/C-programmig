// type declaration structures
#include <stdio.h>s

int main()
{
    // int a = 43; // type declaration intruction
    // int a = 12, b, c;
    // b = c = a;
    // printf("the value of a is %d\n", a);
    // printf("the value of b is %d\n", b);
    // printf("the value of c is %d\n", c);
    float a = 1.1; // you can't define b before a as compiler reads the code linewise
    float b = a + 8.9;

    printf("the value of b is %f\n", b);
    return 0;
}