// To covert celsius to farhenenit

#include <stdio.h>
int convert(a);
int main()
{
    int cel, frhn;
    printf("Enter the temperature in degree celsius\n");
    scanf("%d", &cel);
    frhn = convert(cel);
    printf("%d", frhn);
    return 0;
}
int convert(a)
{
    int b;
    b = (9 * a)/5 + 32;
    return b;
}