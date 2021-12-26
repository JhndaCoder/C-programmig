#include <stdio.h>

int main()
{
    int i = 69;
    int *ptr = &i;

    // Initial value of ptr
    printf("The value of ptr is %d\n", ptr);
    // Addition of a number
    ptr = ptr + 2;
    printf("The value of ptr is %d\n", ptr);
    // Subtraction of a number
    ptr = ptr - 1;
    // Subtraction of a pointer from another
    printf("The value of ptr is %d\n", ptr);
    int j = 420;
    // Initial value of ptr_2
    int *ptr_2 = &j;
    printf("The value of ptr_2 is %d\n", ptr_2);
    // Subtraction of both pointers
    int x = ptr_2 - ptr;
    printf("The value of ptr_2 - ptr is %d\n", x);
    // Comparison b/w both pointers
    if (ptr_2 > ptr)
    {
        printf("ptr_2 is greater then ptr");
    }
    else
    {
        printf("ptr is greater then ptr_2");
    }

    return 0;
}