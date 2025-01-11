#include<stdio.h>
void main(){
        int num;
	int table=1;

        printf("Enter integer: ");
        scanf("%d", &num);

	if(num>=0){
		if(num%2==0){
        		for(int i=1; i<=10; i++){
                		table=i*num;
                        	printf("%d ", table);
                		
        		}
			printf("\n");
		}else{
			 for(int i=10; i>=1; i--){
                                table=i*num;
                                printf("%d ", table);

                        }
			 printf("\n");
		}

	}else{
        	printf("Enter non negative integer\n");
	}

}
