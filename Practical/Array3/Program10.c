#include<stdio.h>
void main(){
        int size1;
        int size2;
	int sumEven=0, sumOdd=0;
        printf("Enter array1 size: ");
        scanf("%d", &size1);

        int arr1[size1];
        printf("Enter elements for array1: \n");
        for(int i=0; i<size1; i++){
                scanf("%d", &arr1[i]);
        }
	for(int i=0; i<size1; i++){
		if(i%2==0){
			sumEven+=arr1[i];
		}
	}

        printf("Enter array2 size: ");
        scanf("%d", &size2);

        int arr2[size2];
        printf("Enter elements for array2: \n");
        for(int i=0; i<size2; i++){
                scanf("%d", &arr2[i]);
        }
	for(int i=0; i<size2; i++){
		if(i%2!=0){
			sumOdd+=arr2[i];
		}
	}

        printf("Sum of even index elements of first array= %d\n", sumEven);
	printf("Sum of odd index elements of second array= %d\n", sumOdd);

}
