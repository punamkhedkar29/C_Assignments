#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);


        for(int i=1; i<=rows; i++){
		int num=rows;
                for(int j=1; j<=rows; j++){
			if(i%2==0){
                        	printf("%d ", num);
                        	num--;
			}else{
				printf("%d ",j);
			}
                }
                printf("\n");
        }
}
