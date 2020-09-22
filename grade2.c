#include<stdio.h>
int grade2(){
    int marks;
    printf("Enter Marks : ");
    scanf("%d",&marks);
    if(marks>=80 & marks<=100){
        printf("A");
    }
    else if(marks>=70 & marks<=80){
        if(marks>=75 & marks<=80){
            printf("B+");
        }
        else if(marks>=70 & marks<76){
            printf("B");
        }
    }
    else if(marks>=60 & marks<=69){
        if(marks>=65 & marks<=69){
            printf("C+");
        }
        else if(marks>=60 & marks<66){
            printf("C");
        }
    }
    else if(marks>=50 & marks<=59){
        if(marks>=55 & marks<=59){
            printf("D+");
        }
        else if(marks>=50 & marks<56){
            printf("D");
        }
    }
    else{
        printf("F");
    }
}
