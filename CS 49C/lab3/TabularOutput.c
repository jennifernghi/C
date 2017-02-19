//
//  TabularOutput.c
//  
//
//  Created by Jennifer Nghi Nguyen on 2/19/17.
// print tabular output
//

#include <stdio.h>
int main(void){
    int row, col =1; // initialize index of row and col
    
    printf("N\t10*N\t100*N\t1000*N\n\n");//header
    
    for( row =1; row<=10; row++){ //row
        for( col = 1; col <=1000; col*=10){//column
            
            // for each row value at each column = row*col
            printf("%d\t", row*col);
            
        }
        
        printf("\n");
    }
}
