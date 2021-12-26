// Program to find whether a student passed or not

#include <stdio.h>

int main()
{
    int maths, science, hindi;
    float total;

    printf("Enter your maths score\n");
    scanf("%d", &maths);

    printf("Enter your science score\n");
    scanf("%d", &science);

    printf("Enter your hindi score\n");
    scanf("%d", &hindi);

    total = (maths + science + hindi) / 3;

    if ((total<40) || science<33 || maths<33 || hindi<33)
    {
        printf("Sorry, You Failed with %f marks\n", total);
    }
else
{
    printf("Congratulations, You Passed with %f marks\n", total);
}

    return 0;
}