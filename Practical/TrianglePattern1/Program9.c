#include <stdio.h>
void main(){
        int row;
        printf("Enter no. of rows: ");
        scanf("%d", &row);

        for(int i=1; i<=row; i++){
		int ch=64+row;
                for(int j=1; j<=row+1-i; j++){
                        printf("%c ", ch);
			ch--;
                }
                printf("\n");
        }
}
