#include<stdio.h>
void main(){
	int size;
	printf("Enter the size of array: ");
	int temp=1;
	while(temp){
		scanf("%d", &size);
		if(size<=0){
			printf("Re-enter size");
		}else{
			temp=0;
		}
	}

	int arr[size];
	printf("Enter array elements: ");
	for(int i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Reversed array:\n");
	for(int i=size-1; i>=0; i--){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
