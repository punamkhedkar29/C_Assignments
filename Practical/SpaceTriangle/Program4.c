#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);

        for(int i=1; i<=rows; i++){
		int num=rows;
                for(int sp=1; sp<=rows-i; sp++){
                        printf("\t");
                }
                for(int j=1; j<=i; j++){
                        printf("%d\t",num);
			num+=rows;

                }

                printf("\n");
        }
}
