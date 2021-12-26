// Poiner Arithmetic

#include <stdio.h>

int main()
{
    // int i = 34;
    // int *ptr = &i;
    // printf("The value of ptr is %d\n", ptr);
    // // ptr++;
    // // ptr++;
    // // ptr++;
    // // ptr = ptr + 1; // increments by 4 bytes
    // printf("The value of ptr is %d\n", ptr);
    // return 0;

    char i = 34;
    char *ptr = &i;
    printf("The value of ptr is %d\n", ptr);
    // ptr++;
    // ptr++;
    // ptr++;
    ptr = ptr + 1; // increments by  1 byte
    printf("The value of ptr is %d\n", ptr);
    return 0;
}