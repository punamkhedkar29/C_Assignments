#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);

	int num=1;
        for(int i=1; i<=rows; i++){
                char ch=64+rows;
                for(int j=1; j<=rows; j++){
			if(j%2==0){
                        	printf("%d ", num);
                        }else{
				printf("%c ", ch);
				ch--;
			}
			
                }
		num++;
                printf("\n");
        }
}
