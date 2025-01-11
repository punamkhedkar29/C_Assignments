#include <stdio.h>
void main(){
	int angle1;
	int angle2;
	int angle3;
	printf("Enter first angle:");
	scanf("%d",&angle1);
	printf("Enter second angle:");
        scanf("%d",&angle2);
	printf("Enter third angle:");
        scanf("%d",&angle3);
	if(angle1>0 && angle2>0 && angle3>0){
		int sum= angle1+angle2+angle3;
		if(sum==180){
			printf("The Triangle is valid\n");
		}else{
			printf("The Triangle is invalid\n");
		}
	}
}
