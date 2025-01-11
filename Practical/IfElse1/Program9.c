#include<stdio.h>
void main(){
        int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
        if(marks>=91 && marks<=100){
                printf("A\n");
        }else if(marks>=81 && marks<=90){
                printf("B\n");
        }else if(marks>=71 && marks<=80){
                printf("C\n");
        }else if(marks>=34 && marks<=70){
                printf("P\n");
        }else{
                printf("Invalid WeekDay");
        }
}
