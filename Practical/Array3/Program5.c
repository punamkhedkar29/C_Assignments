#include<stdio.h>
void main(){

        int size1;
        printf("Enter array1 size: ");
        scanf("%d", &size1);

        int arr1[size1];

        printf("Enter elements for array1: \n");
        for(int i=0; i<size1; i++){
                scanf("%d", &arr1[i]);
        }

	 int size2;
        printf("Enter array2 size: ");
        scanf("%d", &size2);

        int arr2[size2];

	if(size1==size2){
        	printf("Enter elements for array2: \n");
        	for(int i=0; i<size1; i++){
                	scanf("%d", &arr2[i]);
        	}
	}else{
		printf("Size of both arrays are different.");
	}

	int flag=0;

	for(int i=0; i<size1; i++){
		if(arr1[i]!=arr2[i]){
			flag=1;
			break;
		}
	}

        if(flag==0){
                printf("Both arrays have same elements.\n");
        }else{
                printf("Both arrays have different elements.\n");
        }
}
