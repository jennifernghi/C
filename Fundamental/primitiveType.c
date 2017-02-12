//
//  primitiveType.c
//  
//
//  Created by Jennifer Nghi Nguyen on 2/9/17.
//
//

#include <stdio.h>
int main(void){
     int j =  (int) 2147483648U;
    int  i=2147483647;
    if(i>j){
        printf("%d > %d", i, j);
    }else{
        printf("<");
    }
}
