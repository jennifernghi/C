//
//  LargestNumber.c
//  
//
//  Created by Jennifer Nghi Nguyen on 2/19/17.
// find the largest number
//


/*
    algorithm:
    initialize counter = 1
               largest = 0
    while counter <= 10
        read input from keyboard write to number
        if number > largest
            largest = number
 */
#include <stdio.h>
int main(void){
    unsigned int counter =1;
    unsigned int number; // current number input
    unsigned int largest = 0; //largest number found so far
    
    printf("Enter 10 non-negative number: \n");
    while(counter<= 10){
        printf("Number %u: ", counter);
        scanf("%u", &number);
        
        if(number > largest){
            largest = number;
        }
        
        counter ++;
    }
    
    printf("Largest number: %u\n", largest);
}
