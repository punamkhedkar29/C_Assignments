#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);

        for(int i=1; i<=rows; i++){
		int ch=64+rows;

                for(int sp=1; sp<=i-1; sp++){
                        printf("\t");
                }
                for(int j=rows-i+1; j>=1; j--){
                        printf("%c\t", ch);
			ch--;

                }
             

                printf("\n");
        }
}
