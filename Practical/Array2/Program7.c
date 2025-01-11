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

        printf("Enter the elements: ");

        for(int i=0; i<size; i++){
                scanf("%d", &arr[i]);
        }

        for(int i=0; i<size; i++){
		if(arr[i]%2==0){
                	printf("%d ",arr[i]*arr[i]);
		}else{
			printf("%d ", arr[i]*arr[i]*arr[i]);
		}
        }
        printf("\n");

}
