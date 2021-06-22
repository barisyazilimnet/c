#include<stdio.h>
// 20 ile 50 arasýndaki tek sayýlarý ekrana yazdýran kodu yazýnýz.
int main(){
	int i;
	for(i=20; i<=50; i++){
		if(i%2==1)
		printf("%d\n",i);
	}
}
