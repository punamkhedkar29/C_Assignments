#include<stdio.h>
void main(){
        int size;
        printf("Enter size of array: ");
        scanf("%d", &size);

        int arr[size];
        int sumEven=0;
	int sumOdd=0;
	

        printf("Enter array elements: ");
        for(int i=0; i<size; i++){
                scanf("%d", &arr[i]);
        }


        for(int i=0; i<size; i++){
                if(i%2==0){
                        sumEven+=arr[i];

                }else{
			sumOdd+=arr[i];
		}
        }
	
        printf("The difference between even indexed element sum and odd indexed element sum is:%d\n", sumEven-sumOdd);
}
