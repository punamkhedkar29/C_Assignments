#include<stdio.h>
void main(){
	int start;
	int end;

	printf("Enter start: ");
	scanf("%d", &start);
	printf("Enter end: ");
	scanf("%d", &end);

	for(int i=start; i<=end; i++){
		if(i%2==0){
			printf("%d ", i);
		}
	}
	printf("\n");
}
