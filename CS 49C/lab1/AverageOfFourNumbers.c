//
//  AverageOfFourNumbers.c
//  
//
//  Created by Jennifer Nghi Nguyen on 2/9/17.
//  Write a program to read 4 numbers and find the average of the 4 numbers
//

#include <stdio.h>

int main(void){
    double num1, num2, num3, num4;
    double average;
    
    printf("num1 = ");
    scanf("%lf", &num1);
    
    printf("num2 = ");
    scanf("%lf", &num2);
    
    printf("num3 = ");
    scanf("%lf", &num3);
    
    printf("num4 = ");
    scanf("%lf", &num4);
    
    average = ((num1+num2+num3+num4)) / 4;
    
    printf("average = (%f + %f + %f + %f) / 4 = %f\n", num1, num2, num3, num4, average);
}
