#include<stdio.h>
int main(){
	int not;
	printf("Lutfen notu giriniz = ");
	scanf("%d", &not);
	if(not>=90){
		printf("AA");
	}else if(not>=80){
		printf("BA");
	}else if(not>=70){
		printf("BB");
	}else{
		printf("FF");
	}
}
