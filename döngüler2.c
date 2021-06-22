#include<stdio.h>
#include<conio.h>

main(){
	int i, j;
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++){
			if((i+j)%2==0)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
