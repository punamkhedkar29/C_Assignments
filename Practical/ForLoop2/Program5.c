#include<stdio.h>
void main(){
        int start;
        int end;
	int product=1;

        printf("Enter start: ");
        scanf("%d", &start);
        printf("Enter end: ");
        scanf("%d", &end);

        for(int i=start; i<=end; i++){
                if(i%2==0){
			product*=i;
                }
        }
        printf("%d\n", product);
}
