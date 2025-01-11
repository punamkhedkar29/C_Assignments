#include<stdio.h>
void main(){
	int num;
	printf("Enter number: ");
        scanf("%d",&num);
	if(num>0){
		printf("%d is Positive\n",num);
	}else if(num==0){
		printf("The number %d is considered newtral\n",num);
	}else{
                printf("%d is Negative\n",num);
        }
}
