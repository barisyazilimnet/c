#include<stdio.h>
int main(){
	float pi=3.14;
	int a;
	printf("%d\n",(int)pi); // pi degeri ondalık sayıdan tam sayıya çevirir
	printf("%f\n",pi);
	a=pi; // a pi ye eşitlenmiştir
	printf("%d\n",a); //tam sayı degeri oldugu için tam sayı bölmüne giren sayıyı yazar
	a=2.15*3; // tam sayı degeri oldugu için sonuc tam sayı çıkar
	pi=2.15*3;
	printf("%d\n%f",a,pi);
	
}
