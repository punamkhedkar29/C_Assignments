#include<stdio.h>
void main(){
        int size;
        printf("Enter array size: ");
        scanf("%d", &size);

        int arr1[size];
        int arr2[size];

        printf("Enter array elements: \n");

        for(int i=0; i<size; i++){
                scanf("%d", &arr1[i]);
        }

        printf("Here is your second array: \n");
        for(int i=size-1; i>=0; i--){
                arr2[i]=arr1[i];
                printf("%d ", arr2[i]);
        }
        printf("\n");
}

