#include<stdio.h>
void main(){
        int num;
	printf("Enter number: ");
        scanf("%d",&num);
        if(num%5==0 || num%10==0){
                printf("Number is divisible\n");
        }else{
                printf("Number is not divisible\n");
        }
}
