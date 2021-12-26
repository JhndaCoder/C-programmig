// Testing pointers in an  array

#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr = arr;
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("These points to the same location\n");
    }
    else
    {
        printf("These don't points to the same location\n");
    }

    return 0;
}