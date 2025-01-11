#include<stdio.h>
void main(){
        int size;
        printf("Enter size of array: ");
        scanf("%d", &size);

        int arr[size];
        int product=1;

        printf("Enter array elements: ");
        for(int i=0; i<size; i++){
                scanf("%d", &arr[i]);
        }


        for(int i=0; i<size; i++){
                if(arr[i]%2!=0){
                        product*=arr[i];

                }
        }
        printf("Product of odd elements:%d\n", product);
}
