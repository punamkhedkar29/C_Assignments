#include<stdio.h>
void main(){
        int age;
	printf("Enter age: ");
        scanf("%d",&age);
        if(age>=18){
                printf("Eligible for voting\n");
        }else{
                printf("Number is not divisible\n");
        }
}
