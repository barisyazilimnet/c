#include<stdio.h>
// kullanýcý -1 girene kadar yazýlan sayýlarýn en büyügünü bulan kod

int main(){
	int girilen=0, eb=0;
	while(girilen!=-1){
		scanf("%d",&girilen);
		if(girilen>eb)
			eb=girilen;
	}printf("eb : %d",eb);
}
