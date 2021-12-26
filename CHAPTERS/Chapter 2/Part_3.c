// operator preccedence
#include <stdio.h>

int main()
{
    int x = 4, y = 9;

    printf("the value of 3x - 8y is %d\n", 3 * x - 8 * y);       // this isn't bcoz of BODMAS
    printf("the value of 8 * y / 3 * x is %d\n", 8 * y / 3 * x); // BODMAS failed
    // in C assosciativity and priority order matters and not BODMAS

    return 0;
}