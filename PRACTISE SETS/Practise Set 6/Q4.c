// To calculate the sum and average of two numbers using pointers and functions

#include <stdio.h>
void sum_and_avg(int a, int b, int *sum, float *avg);
int main()
{
    int x, y, sum;
    float avg;
    printf("Enter the numbers\n");
    scanf("%d %d", &x, &y);
    sum_and_avg(x, y, &sum, &avg);
    printf("The value of sum is %d and value of average is %.2f", sum, avg);
    return 0;
}
void sum_and_avg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}