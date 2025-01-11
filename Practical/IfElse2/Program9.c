#include<stdio.h>
void main(){
	int a;
	int b;
	int c;
	printf("Enter side a: ");
	scanf("%d", &a);
	printf("Enter side b: ");
        scanf("%d", &b);
	printf("Enter side c: ");
        scanf("%d", &c);
	if(a>0 && b>0 && c>0){
		if((a*a)+(b*b)==(c*c)){
			printf("Its Pythagorean triplet\n");
		}else{
			printf("Not a Pythagorean triplet\n");
		}
	}else{
		printf("Enter side grater than 0\n");
	}
}

