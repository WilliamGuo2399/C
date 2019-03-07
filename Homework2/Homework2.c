//Program that stores two inputs and prints the product, quotient
//remainder, sum, and difference of the two inputs
#include <stdio.h>

int main()
{
    int userInt;
    int nextInt;
    //int number;
    printf("Enter two numbers: ");
    scanf("%d %d", &userInt, &nextInt );


    //Multiplication
    int number=userInt*nextInt;

    //Integer division - quotient
    int number1=userInt/nextInt;

    //Adding - sum
    int number2=userInt+nextInt;

    //Subtraction - difference
    int number3=userInt-nextInt;

    //Print statements
    printf("%d * %d = %d\n", userInt, nextInt, number);
    printf("%d / %d = %d\n", userInt, nextInt, number1);
    printf("%d %% %d = %d\n", userInt, nextInt, userInt % nextInt );
    printf("%d + %d = %d\n", userInt, nextInt, number2);
    printf("%d - %d = %d\n", userInt, nextInt, number3);
}
