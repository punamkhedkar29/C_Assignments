#include <stdio.h>
void main(){
        int row;
        printf("Enter no. of rows: ");
        scanf("%d", &row);

        for(int i=1; i<=row; i++){
		int ch1=65;
		int ch2=96+i;
                for(int j=1; j<=i; j++){
			if(i%2==0){
                        	printf("%c ", ch1);
				ch1++;
			}else{
				printf("%c ", ch2);
			}
                }
                printf("\n");
        }
}
