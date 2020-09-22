#include<stdio.h>
int grade(){
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);


    if(marks>=80 & marks<=100){
        printf("A");
    }
    else if(marks<=79 & marks>=70){
        printf("B");
    }
    else if(marks<=69 & marks>=60){
        printf("C");
    }
    else if(marks<=59 & marks>=50){
        printf("D");
    }
    else{
        printf("F");
    }
}
