//verilen sayýlarýn kombinasyonu bulan kod
#include<stdio.h>
#include<conio.h>

int fact(int), comb(int,int);
main(){
	printf("iki sayi giriniz :");
	int x,y;
	scanf("%d%d",&x,&y);
	printf("kombinasyonu :%d",comb(x,y));
}
int comb(int x, int y){
	return fact(x)/(fact(y)*(fact(x-y)));
}
int fact(int x){
	int sonuc=1, i;
	for(i=1; i<=x; i++){
		sonuc*=i;
	}
	return sonuc;
}
