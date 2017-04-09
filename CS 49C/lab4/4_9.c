//
//  4_9.c
//  
//
//  Created by Jennifer Nghi Nguyen on 3/2/17.
// sum of a sequence of integers
//

#include "4_9.h"
int main(void){
    unsigned int repetition =0;
    int number;
    int sum =0;
    
    //number of subsequent integer
    printf("Enter repetition: ");
    scanf("%u", &repetition);
    
    //input integers and calculate the sum
    for(unsigned int i =1; i<=repetition; i++){
        printf("%d: ",i);
        scanf("%d", &number);
        sum +=number;
    }
    
    //print out the sum
    printf("sum = %d\n", sum);
}
