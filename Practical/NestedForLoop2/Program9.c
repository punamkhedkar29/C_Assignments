#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);

    

        for(int i=1; i<=rows; i++){
		char ch='A';
                for(int j=1; j<=rows; j++){
			if(j%2==0){
                        	printf("%c ", ch);
			}else{
				printf("%d ", j);
			}
			ch++;
                        
                }
                printf("\n");
        }
}
