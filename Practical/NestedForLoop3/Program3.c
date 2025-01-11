#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);
        for(int i=1; i<=rows; i++){
		int num=i;
                for(int j=1; j<=rows; j++){
                        printf("%d ", num);
                        num++;
                }
                printf("\n");
        }
}
