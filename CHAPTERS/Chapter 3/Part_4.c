#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);

    (a < 5) ? printf("A is less than 5") : printf("A is not less than 5\n"); // one liner if statement
    return 0;
}