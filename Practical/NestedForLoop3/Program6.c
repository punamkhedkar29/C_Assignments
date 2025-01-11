#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);

        for(int i=1; i<=rows; i++){
                char ch='A';
                for(int j=1; j<=rows; j++){
			if(rows%2==0){
				if(j%2==0){
                        		printf("%c ", ch);
				}else{
					printf("%d ", ch);
				}
				ch++;
			}else{
				printf("%c ", ch);
				ch++;
			}
                }
                printf("\n");
        }
}
