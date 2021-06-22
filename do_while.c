#include<stdio.h>

int main(){
	int i=0; // burasý sýfýr olursa döngü çalýþýr mama 11 olunca sadece bir defa 11 yazdýrýr býrakýr.
	do{
		printf("%d\n",i);
		i++;
	}while(i<=10);
}
