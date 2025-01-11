#include<stdio.h>
void main(){
	char ch='A';

        for(int i=1; i<10; i++){
		if(i%2==0){
                	printf("%c ", ch);
		}else{
			printf("%d ",i);
		}
		ch++;

        }
        printf("\n");
  


}
