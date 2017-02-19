//
//  TwoLargestNumber.c
//  
//
//  Created by Jennifer Nghi Nguyen on 2/19/17.
// find two largest number
//

#include <stdio.h>
int main(void){
    //this program can work with signed numbers
    unsigned int counter =1;
     int number; // current number input
     int largest1; //largest number found so far
     int largest2 ; //next largest number
    
    printf("Enter 10 non-negative number \n");
    while(counter<= 10){
        printf("Number %u: ", counter);
        scanf("%d", &number);
        
        // initialize 2 largest numbers at first counter
        if(counter ==1){
            largest1 = number;
            largest2 = number;
        }
    
        
        if(number > largest1){
            // the largest number
            largest1 = number;
        }else if(number > largest2){
            //the second largest number
            largest2 = number;
        }
        
        
        counter ++;
    }
    
    printf("2 Largest numbers: %d, %d\n", largest1, largest2);
}
