#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age <= 90 && age >= 18) // logical operator used
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You can't drive\n");
    }

    if (age >= 100)
    {
        printf("why are you still alive\n"); // LOL
    }

    return 0;
}