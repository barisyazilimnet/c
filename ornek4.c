#include<stdio.h>
// kullan�c� -1 girene kadar yaz�lan say�lar�n en b�y�g�n� bulan kod

int main(){
	int girilen=0, eb=0;
	while(girilen!=-1){
		scanf("%d",&girilen);
		if(girilen>eb)
			eb=girilen;
	}printf("eb : %d",eb);
}
