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
	if(size1==size2){

        	printf("Enter elements for array2: \n");
        	for(int i=0; i<size2; i++){
                	scanf("%d", &arr2[i]);
        	}

		 int arrDemo[size1];
        for(int i=0; i<size1; i++){
                arrDemo[i]=arr1[i];
        }

        printf("Array 1: ");
        for(int i=0; i<size1; i++){
                arr1[i]=arr2[i];
                printf("%d | ", arr1[i]);
        }

        printf("Array 2: ");
        for(int i=0; i<size2; i++){
                arr2[i]=arrDemo[i];
                printf("%d | ", arr2[i]);
        }
	}else{
		printf("Enter same size as array1\n");
	}
	printf("\n");

}
