// Functions and recursions

#include <stdio.h>
void change(int a);

int main()
{
    int b = 55;
    printf("The value of b before change is %d\n", b);
    change(b);
    printf("The value of b after change is %d\n", b); // Value won't change with the change function
    return 0;
}
void change(int a)
{
    a = 77;
}