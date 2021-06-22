//verilen sayýnýn faktoriyelini bulan kod
#include<stdio.h>

int fact(int);
int main(){
	printf("Bir sayi giriniz :");
	int x;
	scanf("%d",&x);
	printf("faktoriyeli :%d",fact(x));
}
int fact(int x){
	int sonuc=1, i;
	for(i=1; i<=x; i++){
		sonuc*=i;
	}
	return sonuc;
}
