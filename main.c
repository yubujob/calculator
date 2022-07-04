/*
project: simple calculator that takes two numbers and output the sum,difference,product and quotient of the numbers

Author: Job Ogola
Compiler: C89
License: MIT
date: July 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{//VARIABLE declaration
    float num1,num2,sum,difference,product,quotient;
    printf("\tcalculator!\n");
    //input
    printf("Enter two numbers: ");
    scanf("%f%f",&num1,&num2);
    //computation
    //arithmetic operators:+ - * / ++-- %
    sum=num1+num2;
    difference=num1-num2;
    product=num1*num2;
    quotient=num1/num2;
    //output
    //20+30=50
    printf("%8.2f+%8.2f=%8.2f",num1,num2,sum);
    printf("%8.2f-%8.2f=%8.2f",num1,num2,difference);
    printf("%8.2f*%8.2f=%8.2f",num1,num2,product);
    printf("%8.2f/%8.2f=%8.2f",num1,num2,quotient);
    return 0;
}
