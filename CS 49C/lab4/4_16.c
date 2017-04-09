//
//  4_16.c
//  
//
//  Created by Jennifer Nghi Nguyen on 3/3/17.
//
//

#include <stdio.h>
int main(void){
    unsigned int fixedRow = 10;
    unsigned int fixedCol = 10;
    //A
     printf("A.\n");
    for(unsigned int i = 1; i<=fixedRow; i++){
        for(unsigned int j =1; j<=i; j++){
            (j==i) ? printf("%s\n","*") : printf("%s", "*");
        }
    }
    puts("");
    //B
     printf("B.\n");
    for(unsigned int i = fixedRow; i>=1; i--){
        for(unsigned int j = i; j>=1; j--){
            (j==1) ? printf("%s\n","*") : printf("%s", "*");
        }
    }
    puts("");
    
    //C
    printf("C.\n");
    for(unsigned int i = 1; i<=fixedRow; i++){
        for(unsigned int j = 1; j<=i-1; j++){
                printf(" ");
        }
        for(unsigned int j = 1; j<=(fixedCol+1)-i; j++){
             (j==(fixedCol+1)-i) ? printf("%s\n","*") : printf("%s", "*");
        }
    }
    
    //D
    printf("D.\n");
    for(unsigned int i = 1; i<=fixedRow; i++){
        for(unsigned int j = 1; j<=fixedCol-i; j++){
            printf(" ");
        }
        for(unsigned int j = 1; j<=i; j++){
           (j==i) ? printf("%s\n","*") : printf("%s", "*");
        }
    }
    
    unsigned int no =1;
    if(1==no){
        printf("in the loop");
    }
    
}
