//
//  AddTwoNumber.c
//  
//
//  Created by Jennifer Nghi Nguyen on 2/9/17.
//Write a program that reads two numbers. Add the two numbers and say if the sum is odd or even.
//
//

#include <stdio.h>
int main(void){
    int num1;
    int num2;
    int sum;
    
    printf("Enter number 1: ");//prompt message input num1
    scanf("%d", &num1);//read num1 from keyboard
    
    printf("Enter number 2: ");//pr
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    if(sum%2==0){
        printf("sum = %d is even", sum);
    }else{
        printf("sum = %d is odd", sum);

    }
    
    puts("");
}
