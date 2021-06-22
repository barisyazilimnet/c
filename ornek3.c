#include<stdio.h>
// kullanýcýdan 3 adet sayýyý okuyan ve en büyügünü ekrana yazdýran kodu yazalým

int main(){
	int girilen, i, eb=0;
	for(i=0; i<=3; i++){
		scanf("%d",&girilen);
			printf("þimdiye kadarki en büyük sayý : %d",eb);
		if(girilen>eb)
			eb=girilen;
	} printf("eb : %d",eb);
}
