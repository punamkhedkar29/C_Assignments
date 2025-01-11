#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);

	int num=rows*rows;
       int temp1=num;
       int temp2=num; 
        for(int i=1; i<=rows; i++){
                for(int j=1; j<=rows; j++){
			if(i%2==0){
			
				if(j%2==0){
				
                        		printf("%d ", temp1);
					temp1--;
				
				}else{
					
					printf("%d ", temp2);
					temp2--;
				
				}
			}else{
				printf("%d ", num);
			}
			
                }
		temp1=num;
                temp2=num;
		num--;
                printf("\n");
        }
}
