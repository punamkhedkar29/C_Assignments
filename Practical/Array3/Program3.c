#include<stdio.h>
void main(){
        int size1;
        printf("Enter array1 size: ");
        scanf("%d", &size1);

        int arr1[size1];

	int sum1=0;
	int sum2=0;

        printf("Enter elements for array1: \n");
        for(int i=0; i<size1; i++){
                scanf("%d", &arr1[i]);
		sum1+=arr1[i];
        }

	int size2;
	printf("Enter array2 size: ");
	scanf("%d", &size2);

	int arr2[size2];

        printf("Enter elements for array2: \n");
        for(int i=0; i<size2; i++){
                scanf("%d", &arr2[i]);
		sum2+=arr2[i];
        }

	if(sum1==sum2){
		printf("The sum of both arrays is the same.\n");
	}else{
		printf("The sum of both arrays is not the same.\n");
	}
}

