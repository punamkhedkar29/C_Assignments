#include<stdio.h>
void main(){
	int num=10;
        for(int i=2; i<=10; i++){
		if(num%i==0){
                	printf("%d,",i);
		}
        }
        printf("\n");
}
