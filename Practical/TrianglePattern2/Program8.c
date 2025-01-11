#include <stdio.h>
void main(){
        int row;
        printf("Enter no. of rows: ");
        scanf("%d", &row);

        for(int i=1; i<=row; i++){
                int ch1=65;
                
                for(int j=1; j<=i; j++){
                        if(i%3!=0){
                                printf("%d ", j);
                        }else{
                                if(j%2==0){
                                        printf("%c ", ch1);
					ch1++;
                                }else{
                                        printf("%d ", j);
					ch1++;
                                }
                        }
                }
                printf("\n");
        }
}
