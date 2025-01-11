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

	int id;
	printf("Enter id to search: ");
	scanf("%d", &id);

        for(int i=0; i<size; i++){
                if(arr[i]==id){
        	printf("Id %d found at index %d\n", id, i);
		}
	}
}
