//
//  lab7_2.c
//  
//
//  Created by Jennifer Nghi Nguyen on 5/3/17.
//
//

#include <stdio.h>

/**
 Write a program to read an integer. Pass this integer to a function called f.
 The function must find the number of 1s in this integer. 
 Then it should check if the number of 1s is odd or even.  
 If the number of 1s is even, the function must return 1. 
 If the number of 1s is even, the function must return 0.  
 After you call this function in main, display the bits of this number in groups of 8 
 and also display the bit value that the function returns.
 */
int f(int, int*);
int getNthBit(int, int );
int main(void){
    
    int x;
    int count =0; // keep the count of 1s
    
    printf("%s", "Enter a number X: ");
    scanf("%d", &x);
    
    
    printf("%s %d\n", "Bits of: ", x);
    int fResult = f(x, &count); // print the bits and return 0 if 1s is even, 0 otherwise
    
    printf("\n%s %d: %d\n", "Numbers of 1s in the binary represenation of", x, count);
    
    printf("%s %d - %s\n", "f return: ", fResult, (fResult==0)? "numbers of 1 is even":"numbers of 1 is odd");
}



/*
 * get bit at postion n
 */
int getNthBit(int x, int pos){
    return (x >> pos) & 1;
}


/**
 *function f take x and pointer of varaiable which hold the count of number of 1s
 */

int f(int x, int *count){
    int bit =0;
    int i = 31;
    while(i>=0){
        bit = getNthBit(x, i); //get the bit at position i
        
        (i%8==0 && i !=0) ? printf("%d ", bit) : printf("%d", bit); //print out the bits in group of 8
        
        if(bit == 1){
            //if bit is 1 increase the counter
            ++(*count);
        }
        --i;
    }
    
    // if number of 1s is even return 0
    if((*count)%2 ==0){
        return 0;
    }else{
        return 1;
    }
}
