#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);

	char ch=64+rows;
        for(int i=1; i<=rows; i++){
                for(int j=1; j<=rows; j++){
                        printf("%c%d ", ch,rows);
                   
                }
                printf("\n");
        }
}
