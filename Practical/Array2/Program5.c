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
       
        printf("Enter the child age: ");
        for(int i=0; i<size; i++){
                scanf("%d", &arr[i]);
		if(arr[i]>5){
			printf("Age should not be greater than 5. Re-enter the age \n");
			i--;
			continue;
		}
        }

        for(int i=0; i<size; i++){
                printf("%d ",arr[i]);
        }
	printf("\n");
        
}
