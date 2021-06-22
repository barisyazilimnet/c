#include<stdio.h>

int main(){
	int x, y;
	for(x=4; x>=0; x--){
		for(y=0; y<4-x; y++){
			printf(" ");
		}
		for(y=0; y<=x; y++){
			printf("*");
		}
		printf("\n");
	}
}
