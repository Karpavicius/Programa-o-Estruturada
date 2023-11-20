#include <stdio.h>

int fatorial (int n){
	puts("Digite um numero: ");
//condição de parada
	if(n==1){
		return 1;
	}
//chamada recursiva
	else{
		return n*fatorial(n-1);
	}
}

int main(){
	printf("%d\n", fatorial(n));
	return 0;
}