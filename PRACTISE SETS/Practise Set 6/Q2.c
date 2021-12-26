// pointer ke saath tympaas

#include <stdio.h>
void adrs(int j);
int main()
{
    int i = 7;
    printf("The address of i is %u\n", &i);
    adrs(i);
    return 0;
}
void adrs(int j){
 printf("The address of i is %u\n",&j);
}
