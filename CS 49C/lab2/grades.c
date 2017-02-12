//
//  grades.c
//  
//
//  Created by Jennifer Nghi Nguyen on 2/11/17.
//Using else if statements write a program that displays your grade:
//90-100  A     80-89 B     70-79 C     60-69 D     other than that F.
//

#include <stdio.h>
int main(void){
    int grade;
    
    //prompt user to input a grade
    printf("Enter grade: ");
    scanf("%d", &grade);
    
    if(grade>=90 && grade<=100){
        
        //90-100
        puts("Grade: A");
        
    }else if(grade>=80 && grade<=89){
        
        //80 - 99
         puts("Grade: B");
        
    }else if(grade>=70 && grade<=79){
        
        //70 - 79
         puts("Grade: C");
        
        
    }else if(grade>=60 && grade<=69){
        
        //60 - 69
         puts("Grade: D");
        
    }else{
        
        //other grade
        //invelid grade: grade>100 or grade<0
        (grade>100 || grade<0) ? puts("invalid grade") : puts("Grade: F");
        
    }
}
