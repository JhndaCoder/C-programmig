// To calculate force of attraction on a body

#include <stdio.h>
int force(a);
int main()
{
    int m, res;
    printf("Enter the value of mass\n");
    scanf("%d", &m);
    res = force(m);
    printf("%d", res);
}
int force(a)
{
    int f;
    f = 9.8 * a;
    return f;
}