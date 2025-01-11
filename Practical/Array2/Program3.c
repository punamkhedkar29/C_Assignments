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
	int sum=0;
        printf("Enter array elements: ");
        for(int i=0; i<size; i++){
                scanf("%d", &arr[i]);
        }

        for(int i=0; i<size; i++){
		sum+=arr[i]*arr[i];
        }
        printf("Sum of squares of all elements:%d\n", sum);
}
