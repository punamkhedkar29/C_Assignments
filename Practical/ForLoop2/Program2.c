#include<stdio.h>
void main(){
        int num;
	int table=1;

        printf("Enter integer: ");
        scanf("%d", &num);

        for(int i=1; i<=10; i++){
		table=i*num;
		printf("%d ", table);
                
        }
        printf("\n");
}
