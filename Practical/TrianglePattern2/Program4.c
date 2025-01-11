#include <stdio.h>
void main(){
        int row;
        printf("Enter no. of rows: ");
        scanf("%d", &row);

        for(int i=1; i<=row; i++){
		int num=1;
                for(int j=1; j<=i; j++){
			if(j%2==0){
                        	printf("A ");
				num++;
			}else{
				printf("%d ",num);
				num++;
			}
                }
                printf("\n");
        }
}
