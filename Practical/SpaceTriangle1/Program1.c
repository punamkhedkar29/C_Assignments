#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);

	int ch=65;
        for(int i=1; i<=rows; i++){
		
                for(int sp=1; sp<=rows-i; sp++){
                        printf("\t");
                }
                for(int j=1; j<=i; j++){
                        printf("%c\t",ch);
			ch++;

                }

                printf("\n");
        }
}
