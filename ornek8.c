#include<stdio.h>
// ekrana * semb�l� ile dik ��gen �izdiren kodu yaz�n�z

int main(){
	int n, i;
	for(n=0; n<5; n++){
		for(i=0; i<=n; i++){
			printf("*");
		}
		printf("\n");
	}
}
