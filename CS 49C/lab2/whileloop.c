//
//  whileloop.c
//  
//
//  Created by Jennifer Nghi Nguyen on 2/11/17.
//Write a program to read 10 numbers and find the sum and average of the ten numbers.
//Use a while loop and read the numbers inside the while loop.
//

#include <stdio.h>

int main(void){
    double average, sum =0;
    int i =1;
    
    while (i<=10) {
        //read 10 numbers in the while loop
        
        double num;
        printf("enter number %d: ", i);
        scanf("%lf", &num);
        
        //add num to the sum
        sum += num;
        i++;
    }
    
    //calculate average
    average = sum/10;
    
    //print out the sum
    printf("sum = %f\n", sum);
    
    //print out the average
    printf("average = %f\n", average);
    
}
