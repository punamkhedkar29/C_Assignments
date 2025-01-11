#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);

        for(int i=1; i<=rows; i++){
		int ch=64+i;
                for(int sp=1; sp<=rows-i; sp++){
                        printf("\t");
                }
                for(int j=1; j<=i; j++){
			if(i%2==0){
                        	printf("%c\t",ch);
				ch++;
			}else{
				printf("%c\t",ch);
				ch--;
			}

                }

                printf("\n");
        }
}
