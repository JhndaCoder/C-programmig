//to calculate area of rectangle by taking values from user
#include <stdio.h>

int main()
{
    float length, breadth;
    printf("What is the length of the rectangle\n");
    scanf("%f", &length);

    printf("What is the breadth of the rectangle\n");
    scanf("%f", &breadth);

    float area = length * breadth;
    printf("The area of rectangle is %f", area);
    return 0;
}