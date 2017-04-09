//
//  random.c
//  
//
//  Created by Jennifer Nghi Nguyen on 3/8/17.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void dice(void);
void scope(void);
void staticScope(void);
int main(void){
    //dice();
    
   // printf("%d", RAND_MAX);
   // scope();
    //staticScope();
    
    int x =5;
    x*=3;
    printf("%d\n", x);
    
    x++;
    ++x;
    
    x= x/2;
    printf("%d\n", x);
    
    printf("%d\n", x++);
    printf("%d\n", ++x);

    
    
}

void dice(){
    //unsigned int seed;
    
   // printf("%s", "enter seed: ");
    //scanf("%u", &seed);
    
    srand(time(NULL));
    
     for(unsigned int i = 1; i<=20; ++i){
         printf("%10d", 1 + (rand() % 6));
         
         if(i % 5 ==0){
             puts("");
         }
     }
}

void scope(void){
    int i1 =0;
    
    {
        int i1 =1;
        int i2 = 2;
        printf("%d", i1);
        
    }
    
    printf("%d", i1);
}

void staticScope(void){
   static int i1;
    
    printf("%d", i1);
}
