#include<stdio.h>
void main(){
        int rows
        printf("Enter rows: ");
        scanf("%d", &rows);

        for(int i=1; i<=rows; i++){
		int ch=64+i;
                for(int sp=1; sp<=i-1; sp++){
                        printf("\t");
                }
                for(int j=rows-i+1; j>=1; j--){
			if(rows%2==0){
				if(i%2!=0){
                        		if(j%2==0){
						printf("%d\t",ch);
						ch++;
					}else{
						printf("%c\t", ch);
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
                                                printf("%d\t",ch);
                                                ch++;
                                        }else{
                                                printf("%c\t", ch);
                                                ch++;
                                        }
                                }else{
                                        if(j%2==0){
                                                printf("%d\t",ch);
                                                ch++;
                                        }else{
                                                printf("%c\t", ch);
                                                ch++;
                                        }
                                }		
			}


                }
               

                printf("\n");
        }
}
