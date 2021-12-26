// Faaltu question

#include <stdio.h>
void gudm();
void gudaf();
void gudn();

int main() // Every function gets called by MAIN directly or indirectly
{
    gudm();
    return 0;
}
void gudm()
{
    printf("Good Morning\n");
    gudaf();
}
void gudaf()
{
    printf("Good Afternoon\n");
    gudn();
}
void gudn()
{
    printf("Good Night\n");
}