#include<stdio.h>
void main(){
        int size1;
        int size2;
        printf("Enter array1 size: ");
        scanf("%d", &size1);

        int arr1[size1];
        printf("Enter elements for array1: \n");
        for(int i=0; i<size1; i++){
                scanf("%d", &arr1[i]);
        }

        printf("Enter array2 size: ");
        scanf("%d", &size2);

         int arr2[size2];
        int size3=size2+size1;
        int arr3[size3];

        /*for(int i=0; i<size3; i++){
                arr3[i] = arr1[i];
		i++;
        }*/

        printf("Enter elements for array2: \n");
        for(int i=0; i<size2; i++){
                scanf("%d", &arr2[i]);
        }

	 int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2) {
        arr3[k++] = arr1[i++];
        arr3[k++] = arr2[j++];
    }

    while(i < size1) {
        arr3[k++] = arr1[i++];
    }

    while(j < size2) {
        arr3[k++] = arr2[j++];
    }
          		
        printf("Array3 elements: \n");
        for(int i=0; i<size3; i++){
                printf("%d | ", arr3[i]);
        }
	printf("\n");

}
