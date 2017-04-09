//
//  4_13.c
//  
//
//  Created by Jennifer Nghi Nguyen on 3/3/17.
//
//

#include "4_13.h"
int main(void){
    /*
     * for i = 1 to 15
     *       for j = 1 to 15
     *           if j =15
     *               print: 'j x i' = j*i with new line
     *           otherwise:
     *               print: 'j x i' = j*i with a tab
     */
    for(unsigned int i =1; i<=15; i+=2){
        
        for(unsigned int j =1; j<=15; j+=2){
            
            (j==15) ? printf("%u x %u = %d\n", j, i, j*i) : printf("%u x %u = %d\t", j, i, j*i);
        }
        
    }
}
