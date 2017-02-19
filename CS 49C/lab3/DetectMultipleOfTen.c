//
//  DetectMultipleOfTen.c
//  
//
//  Created by Jennifer Nghi Nguyen on 2/19/17.
//
//

#include <stdio.h>
int main(void){
    int i;
    for(i =1; i<=100; i++){
        if(i%10==0){
            printf(" * \n");
        }else{
            printf(" * ");
        }
    }
}
