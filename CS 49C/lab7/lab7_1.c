//
//  lab7_1.c
//  
//
//  Created by Jennifer Nghi Nguyen on 5/2/17.
//
//

#include <stdio.h>
void reverseBit(unsigned int);
void printBits(unsigned int);
int getNthBit(int, int );
int main(void){
    int x;
    printf("%s", "input an unsigned number: ");
        
    scanf("%u",&x);
    
    printf("%s %u\n", "Binary representation of", x);
    printBits(x); //print out the original bits
    
    printf("\n%s %u\n", "Reverse bits of", x);
    reverseBit(x); //print out reverse bits
    
    puts("");
}

/*
 * get bit at postion n
 */
int getNthBit(int x, int pos){
    return (x >> pos) & 1;
}

/*
 * print original bits
 */
void printBits(unsigned int x){
    int i = 31;
    while(i>=0){
        printf("%d", getNthBit(x, i));
        --i;
    }
}

/*
 * print reverse bits
 */
void reverseBit(unsigned int x){
    int i =0;
    while (i<32) {
        printf("%d", getNthBit(x, i));
        ++i;

    }
}
