// Arrays to functions

#include <stdio.h>

// void print_array(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n\n", i + 1, *(ptr+i));
//     }
// }

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n\n", i + 1, arr[i]);
    }

    arr[2] = 5555; // will be changed in arr array of main as well
}

int main()
{
    int arr[] = {1, 2, 69, 33, 59, 23, 45};
    print_array(arr, 7);
    printf("%d", arr[2]);
    // if  we keep n more than 7 here than it will print garbage value as no value is assigned by us
    return 0;
}