//
//  LargestOfTwo.c
//  
//
//  Created by Jennifer Nghi Nguyen on 2/11/17.
//Write a program to read 2 numbers and display the largest of the two.
//

#include <stdio.h>
int main(void){
    
    int num1, num2;
    
    //prompt user to input num1
    printf("num1 = ");
    scanf("%d", &num1);
    
    //prompt user to input num2
    printf("num2 = ");
    scanf("%d", &num2);

    printf("largest number: ");
    
    //shorthand if statement
    (num1>num2) ? printf("%d\n", num1): printf("%d\n", num2);
    
}
