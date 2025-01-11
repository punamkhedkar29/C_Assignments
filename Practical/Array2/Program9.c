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

        printf("Enter elements: ");
        for(int i=0; i<size; i++){
                scanf("%d", &arr[i]);
        }

	int index;
	printf("Enter the index value upto which you want to print the elements: ");
	int temp1=1;
	while(temp1){
		scanf("%d", &index);
		if(index>size){
			printf("Index cannot be greater than size. Re-enter the index value: \n");
		continue;
		}else{
			temp1=0;
		}
	}


        for(int i=0; i<size; i++){
		if(i<=index){
                	printf("%d ",arr[i]);
		}else{
			break;
		}
        }
        printf("\n");

}
