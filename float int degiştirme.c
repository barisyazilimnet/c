#include<stdio.h>
int main(){
	float pi=3.14;
	int a;
	printf("%d\n",(int)pi); // pi degeri ondal�k say�dan tam say�ya �evirir
	printf("%f\n",pi);
	a=pi; // a pi ye e�itlenmi�tir
	printf("%d\n",a); //tam say� degeri oldugu i�in tam say� b�lm�ne giren say�y� yazar
	a=2.15*3; // tam say� degeri oldugu i�in sonuc tam say� ��kar
	pi=2.15*3;
	printf("%d\n%f",a,pi);
	
}
