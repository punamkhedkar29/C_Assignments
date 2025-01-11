#include<stdio.h>
void main(){
	int size;
	printf("Enter size of array: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter array elements: ");
	for(int i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}
	printf("Even indexed elements: ");
	for(int i=0; i<size; i++){
		if(i%2==0){
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}
