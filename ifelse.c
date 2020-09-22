#include<stdio.h>
int ifelse(){
    int marks;
    printf("Enter You Marks: ");
    scanf("%d",&marks);
    printf("%d =",marks);
    //check condition
    if(marks>=50){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
}
