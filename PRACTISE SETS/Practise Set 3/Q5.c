// To find whether a character entered by user is lowercase or not
//  Use ASCII table for value refernce

#include <stdio.h>

int main()
{
    /* 97 - 122 = a - z */
    /* (ASCII values) */

    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    if (ch <= 122 && ch >= 97)
    {
        printf("It is lowercase");
    }
    else
    {
        printf("It is not lowercase");
    }
    return 0;
}