//
//  sum.c
//  
//
//  Created by Jennifer Nghi Nguyen on 1/31/17.
//
//

#include <stdio.h>

int main(void)
{
    int integer1;
    int integer2;
    
    printf("1st integer:\n");
    scanf("%d", &integer1);
    
    printf("2nd integer:\n");
    scanf("%d", &integer2);
    
    int sum;
    sum = integer1 + integer2;
    
    printf("total sum = %d%\n", sum);
}
