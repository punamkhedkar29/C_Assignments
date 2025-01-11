#include<stdio.h>
void main(){
	int num;
	printf("Enter number: ");
        scanf("%d",&num);
	if(num==1){
		printf("MONDAY\n");
	}else if(num==2){
                printf("TUESDAY\n");
        }else if(num==3){
                printf("WEDNESDAY\n");
        }else if(num==4){
                printf("THURSDAY\n");
        }else if(num==5){
                printf("FRIDAY\n");
        }else if(num==6){
                printf("SATURDAY\n");
        }else if(num==7){
                printf("SUNDAY\n");
        }else{
		printf("Invalid WeekDay");
	}
}
