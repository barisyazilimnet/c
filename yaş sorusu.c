#include<stdio.h>

int main(){
	int bugun, dogum_tarihi;
	printf("bugunun tarihini giriniz: ");
	scanf("%d",&bugun);
	printf("dogum tarihinizi giriniz: ");
	scanf("%d",&dogum_tarihi);
	printf("yasiniz: %d",bugun-dogum_tarihi);
}
