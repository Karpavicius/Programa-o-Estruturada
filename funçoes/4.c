#include <stdio.h>
int numeros(int n){
	if(n==1){
		return 1;
	}
	else{
		printf("n=: %d\n", n);
		return numeros (n-1);
	}
}
int main(){
	int n;
	puts("Digite um valor para ser impresso: ");
	scanf("%d", &n);	
	printf("n=: %d\n", numeros(n));
}