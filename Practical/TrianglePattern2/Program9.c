#include <stdio.h>
void main(){
        int row;
        printf("Enter no. of rows: ");
        scanf("%d", &row);

        for(int i=1; i<=row; i++){
                int num=i;
                for(int j=1; j<=i; j++){
                      printf("%d ",num);
		      int mul=j+1;
		      num*=mul;
                }
                printf("\n");
        }
}
