#include<stdio.h>
// kullan�c�dan 3 adet say�y� okuyan ve en b�y�g�n� ekrana yazd�ran kodu yazal�m

int main(){
	int girilen, i, eb=0;
	for(i=0; i<=3; i++){
		scanf("%d",&girilen);
			printf("�imdiye kadarki en b�y�k say� : %d",eb);
		if(girilen>eb)
			eb=girilen;
	} printf("eb : %d",eb);
}
