#include<stdio.h>
// ekrana * sembölü ile dik üçgen çizdiren kodu yazýnýz

int main(){
	int n, i;
	for(n=0; n<5; n++){
		for(i=0; i<=n; i++){
			printf("*");
		}
		printf("\n");
	}
}
