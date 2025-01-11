#include <stdio.h>
void main(){
        int row;
        printf("Enter no. of rows: ");
        scanf("%d", &row);

        for(int i=1; i<=row; i++){
		int ch=96+i;
                for(int j=1; j<=i; j++){
                        printf("%c ", ch);
			ch--;
                }
                printf("\n");
        }
}
