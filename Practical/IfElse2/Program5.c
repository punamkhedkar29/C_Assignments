#include<stdio.h>
void main(){
        int units;
        printf("Enter units: ");
        scanf("%d",&units);
        if(marks>=1 && marks<=100){
		int total=5*units;
                printf("%d is total cost\n",total);
        }else if(marks>=101 && marks<=300){
                int total=7*units;
                printf("%d is total cost\n",total);
	}else if(marks>=301){
                int total=10*units;
                printf("%d is total cost\n",total);
        }else{
                printf("Invalid input\n");
        }
}
