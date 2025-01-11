#include <stdio.h>
void main(){
        int row;
        printf("Enter no. of rows: ");
        scanf("%d", &row);

	int num=1;
        for(int i=1; i<=row; i++){
                for(int j=1; j<=i; j++){
                        printf("%d ", num);
			num+=2;
                }
                printf("\n");
        }
}
