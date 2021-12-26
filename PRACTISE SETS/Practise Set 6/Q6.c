//

#include <stdio.h>
int chng(int a);
int main()
{
    int i = 7, x;
    x = chng(i);
    printf("%d", x);
    return 0;
}
int chng(int a)
{
    int n;
    n = 10 * a;
    return n;
}