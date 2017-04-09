//
//  malloc.c
//  
//
//  Created by Jennifer Nghi Nguyen on 3/7/17.
//
//

#include <stdio.h>
#include <stdlib.h>
void foo();
int main(void){
    unsigned int n =1;
   
    printf("%d \n", ++n);
    printf("%d ", n);
}

void foo(){
    int x;
    int *ptr = malloc(300);
    x=10;
    *ptr = 20;
    return;
}
