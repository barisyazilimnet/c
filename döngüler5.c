#include<stdio.h>
#include<conio.h>

main(){
	int sum=0, d;
	for(d=1; d<=100; d++){
		int p=0, i;
		for(i=2; i<=d-1; i++){
			if(d%i==0){
			p=1;
			}
		}
		if(p==0){
			printf("%d\n",d);
			sum=sum+d;
		}
	}
	printf("sum : %d",sum);
}
