#include<stdio.h>
void main(){
        int size;
        printf("Enter size of array: ");
        scanf("%d", &size);

        int arr[size];
        int sum=0;

        printf("Enter array elements: ");
        for(int i=0; i<size; i++){
                scanf("%d", &arr[i]);
        }


        for(int i=0; i<size; i++){
                
                sum+=arr[i];
               
        }
        printf("Sum of all elements:%d\n", sum);
}
