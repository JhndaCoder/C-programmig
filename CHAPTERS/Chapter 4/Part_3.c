// Do-While loop

#include <stdio.h>

int main()
{
    int a = 0;

    do
    {
        printf("The value of a is %d\n", a);
        a++;
    } while (a < 10);

    // While : Checks the condition first and then executes the code
    // Do-While : Executes the code first and then checks the condition (Atleast once)

    return 0;
}