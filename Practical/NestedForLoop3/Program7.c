#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);

	char ch=64+(rows*rows);
	int num=rows*rows;

        for(int i=1; i<=rows; i++){
                for(int j=1; j<=rows; j++){
			if(j%2==0){
                        	printf("%d\t", num);
                        }else{
				printf("%c\t", ch);
			}
			ch--;
			num--;
                }
                printf("\n");
        }
}
