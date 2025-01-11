#include<stdio.h>
void main(){
        float marks;
        printf("Enter marks: ");
        scanf("%f",&units);
        if(marks>70.00 && marks<=100.00){
                printf("First class with distinction\n");
        }else if(marks>50.00 && marks<=60.00){
                printf("First class\n");
        }else if(marks>40.00 && marks<=50.00){
                printf("Second class\n");
	}else if(marks>34 && marks<=40){
		printf("Pass\n");
        }else{
                printf("Fail\n");
        }
}
