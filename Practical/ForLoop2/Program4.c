#include<stdio.h>
void main(){
        int start;
        int end;
	int total=0;

        printf("Enter start: ");
        scanf("%d", &start);
        printf("Enter end: ");
        scanf("%d", &end);

        for(int i=start; i<=end; i++){
        	total+=i;        
        }
        printf("%d\n ", total);
}
