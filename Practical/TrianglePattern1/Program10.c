#include <stdio.h>
void main(){
        int row;
        printf("Enter no. of rows: ");
        scanf("%d", &row);

        for(int i=1; i<=row; i++){
                int ch=64+i;
                for(int j=1; j<=row+1-i; j++){
                        if(row%2==0){
                                if(i%2!=0){
                                        if(j%2==0){
                                                printf("%c\t",ch);
                                                ch++;
                                        }else{
                                                printf("%d\t", ch);
                                                ch++;
                                        }
                                }else{
                                        if(j%2!=0){
                                                printf("%c\t",ch);
                                                ch++;
                                        }else{
                                                printf("%d\t", ch);
                                                ch++;
                                        }
                                }

                        }else{
                                 if(i%2==0){
                                        if(j%2==0){
                                                printf("%c\t",ch);
                                                ch++;
                                        }else{
                                                printf("%d\t", ch);
                                                ch++;
                                        }
                                }else{
                                        if(j%2!=0){
                                                printf("%c\t",ch);
                                                ch++;
                                        }else{
                                                printf("%d\t", ch);
                                                ch++;
                                        }
                                }
                        }
                }
                printf("\n");
        }
}
