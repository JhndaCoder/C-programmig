// Loops Intro
// Loops are used to repeat similar part of code snippet efficiently

// While loop

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    while (a <= 100)
    // while (a > 10) // infinite loop
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}