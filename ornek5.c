#include<stdio.h>
//kullanýcý -1 girene kadar girilen sayýlarýn ortalamasýný bulan kodu yazýnýz.

int main(){
	int girilen=0, ort, n=0, toplam=0;
	while(girilen!=-1){
		scanf("%d",&girilen);
		n++;
		toplam+=girilen;
	}printf("kac sayi girildi : %d\n sayilarin toplami : %d\n ortalama : %d",n,toplam,toplam/n);
}
