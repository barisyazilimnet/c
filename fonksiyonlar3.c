// verilren sýradaki fibonacci sayýsýný bulan kod
#include<stdio.h>
#include<conio.h>

int fib(int);
main(){
	int x;
	scanf("%d", &x);
	printf("%d", fib(x));
}
int fib(int n){
	int a=1, b=1, c, i;
	for(i=3; i<=n; i++){
		c=a+b;
		a=b;
		b=c;
	}	
	return c;
}

