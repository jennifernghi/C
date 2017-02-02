//
//  IfElse.c
//  
//
//  Created by Jennifer Nghi Nguyen on 2/1/17.
//
//

#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    
    puts("num1 = ");
    scanf("%d", &num1);
    
    printf("num2 = ");
    scanf("%d", &num2);
    
    if(num1 < num2){
        printf("%d < %d", num1, num2);
    }else if(num1 > num2){
        printf("%d > %d", num1, num2);
    }else{
        printf("%d = %d", num1, num2);
    }
}
