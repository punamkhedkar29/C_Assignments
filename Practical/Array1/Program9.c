#include<stdio.h>
void main(){
        int size;
        printf("Enter size of array: ");
        scanf("%d", &size);

        int arr[size];
	int index;

        printf("Enter array elements: ");
        for(int i=0; i<size; i++){
                scanf("%d", &arr[i]);
        }


        for(int i=0; i<size; i++){
                if(arr[i]%5==0){
                  index=i;
	    	  break;	  

                }
        }
        printf("First element divisible by 5 found at index %d\n", index);
}
