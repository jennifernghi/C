//
//  lab5.c
//  
//
//  Created by Jennifer Nghi Nguyen on 3/21/17.
//
//

#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int isEven(int);
void squareAsterisk(int);
int randInt(int, int);
double minimum(double, double, double);
int isMultible(int, int);
int toFahrenheit(int);
int toCelsius(int);

int main(void){
    
   /*printf("14 is a multiple of 7: %s\n", (isMultible(7, 14)) ? "True" : "False");
    printf("2 is a multiple of 2: %s\n", (isMultible(2, 2)) ? "True" : "False");
    printf("2 is a multiple of 3: %s\n", (isMultible(3, 2)) ? "True" : "False");
    printf("-7 is a multiple of 3: %s\n", (isMultible(3, -7)) ? "True" : "False");*/
    
   /* int size =0;
    printf("Enter number of time you want to try: ");
    scanf("%d", &size);
    int a = 0, b = 0;
    for(int i=1; i<=size; i++){
        printf("%s", "a = ");
        scanf("%d", &a);
        printf("%s", "b = ");
        scanf("%d", &b);
        printf("%d is a multiple of %d: %s\n", b, a, (isMultible(a, b)) ? "True" : "False");
    }*/
   /*int size =0;
    
    printf("size of input: ");
    scanf("%d", &size);
    
    int a[size];
    
    printf("enter input one per line: \n");
    for(int i = 1; i<=size; i++){
        scanf("%d", &a[i]);
    }
    
    for(int i=1; i<=size; i++){
        printf("%d is even? %s\n", a[i], (isEven(a[i]) == 1) ? "True": "False");
    }
    */
   // squareAsterisk(4);
    
    /*double array[3];
    
    printf("%s", "enter 3 floating point number one per line: \n");
    for (int i =0; i< 3; i++){
        scanf("%lf", &array[i]);
    }
    
     printf("minimum: %f\n", minimum(array[0], array[1], array[2]));
    
    */
     /*srand(time(NULL));
     int n1 = 1 + (rand() % ((2 - 1) + 1));
    printf("random number in range [1 2]: %d\n", n1);

    int n2 = 1 + (rand() % ((100 - 1) + 1));
    printf("random number in range [1 100]: %d\n", n2);
    
    int n3 = 0 + (rand() % ((9 - 0) + 1));
    printf("random number in range [0 9]: %d\n", n3);
    
    int n4 = 1000 + (rand() % ((1112 - 1000) + 1));
    printf("random number in range [1000 1112]: %d\n", n4);
    
    int n5 = -1 + (rand() % ((1 - (-1)) + 1));
    printf("random number in range [-1 1]: %d\n", n5);
    
    int n6 = -3 + (rand() % ((11 - (-3)) + 1));
    printf("random number in range [-3 11]: %d\n", n6);*/
    
    int count =0;
    printf("%s", "Celsius to Farenheit\n");
    for(int i =0; i<=100; i++){
        count++;
        printf("%3d C = %3d F    ", i,toFahrenheit(i));
        if(count%10==0){
            puts("");
        }
        
    }
    puts("");
    
    count =0;
    printf("%s", "Farenheit to Celsius\n");
    for(int i =32; i<=212; i++){
        count++;
        printf("%3d F = %3d C    ", i,toCelsius(i));
        if(count%10==0){
            puts("");
        }
        
    }
    puts("");
}

int isMultible(int a, int b){
    if(b%a==0){
        return 1;
    }
    
    return 0;
}

int isEven(int a){
    if(a%2==0){
        return 1;
    }
    
    return 0;
}

void squareAsterisk(int side){
    
    for(int row = 1; row<= side; row++){
        for(int col = 1; col<= side; col++){
            (col==side) ? printf("%s\n","*") : printf("%s","*");
        }
    }
    
}

int randInt(int rangeMin, int rangeMax){
    srand(time(NULL));
    int r = rand();
    
    return rangeMin + (r % ((rangeMax - rangeMin) + 1));
}

double minimum (double a, double b, double c){
    
    double array[] = {a, b, c};
    double min = array[0];
    
    for (int i =0; i<3; i++) {
        if(array[i] < min ){
            min = array[i];
        }
        
        
    }
    return min;
    

}

int toCelsius(int farenheight){

	return (int)(((double)farenheight -32) / 1.8);

}

int toFahrenheit(int celsius){
	return (int)(((double)celsius * 1.8) + 32);
}
