#include<stdio.h>
void main(){
        int num;
	printf("Enter number: ");
        scanf("%d",&num);
        if(num%3==0 && num%7==0){
                printf("%d is divisible by 3 and 7\n");
        }else{
                printf("%d is not divisible by 3 and 7\n");
        }
}
