// Print multiplication table using arrays

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the required number\n");
    scanf("%d", &n);
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = n*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", n, i+1, a[i]);
    }
    
    return 0;
}