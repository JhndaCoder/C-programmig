// to calculate simple intrest
#include <stdio.h>

int main()
{
    int amount = 100000, time = 2;
    float rate = 8.5;
    float intrest = (amount * time * rate) / 100;
    printf("The simple intrest is %f", intrest);
    return 0;
}