# include<stdio.h>
# include<math.h> // this library has to be added to do exponentiation

int main()
{
    int a = 4, b = 8;
    // int z = a * b; // this is correct way
    int z;
    // a *b = z; // this is wrong way

    // printf("the value of a + b is %d\n", a + b);
    // printf("the value of a - b is %d\n", a - b);
    // printf("the value of a * b is %d\n", a * b);
    // printf("the value of a / b is %d\n", a / b);

    // printf("the value of z is %d\n", z);

    // modular division operator

    printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2); //the remainder will change with minus sign in numerator
    printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2); //the remainder will not change with minus sign in denominator

    //there is no operator to perform exponentiation in C

    printf("the value of 4 to the power 5 is %f\n", pow(4, 5)); // this function has to be used to do exponentiation

    return 0;
}