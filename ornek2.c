#include<stdio.h>
// 100'den 20'ye kadar, 3 ve 7 tam b�l�nen say�lar�, b�y�kten k���ge yazd�ral�m

int main(){
	int i;
	for(i=100; i>=20; i--){
		if(i%3==0&&i%7==0)
		printf("%d\n",i);
	}
}
