//
//  lab4_4_7.c
//  
//
//  Created by Jennifer Nghi Nguyen on 3/2/17.
//
//

#include <stdio.h>

int main(void){
    
    // a. 1 2 3 4 5 6 7
    printf("a. ");
    for(unsigned int i = 1; i<=7; i++){
        (i==7) ? printf("%u ", i) : printf("%u, ", i);
    }
    puts("");
    
    // b. 3 8 13 18 23
    printf("b. ");
    for(unsigned int i =3; i<=23; i += 5){
        (i==23) ? printf("%u ", i) : printf("%u, ", i);
    }
    puts("");
    
    // c. 20 14 8 2 -4 -10
    printf("c. ");
    for(int i =20; i>=-10; i -= 6){
        (i==-10) ? printf("%d ", i) : printf("%d, ", i);
    }
    puts("");
    
    // d. 19 27 35 43 51
    printf("d. ");
    for(unsigned int i =19; i<=51; i += 8){
        (i==51) ? printf("%u ", i) : printf("%u, ", i);
    }
    puts("");
}

