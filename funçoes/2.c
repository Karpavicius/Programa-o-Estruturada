#include <stdio.h>
#include <math.h>
int potencia(int n){
	if(n==1){
		return 1;   
	}
	else{
		return pow(n,3)+potencia(n-1); 
	}
}
int main(int a){
	puts("Digite o numero da potencia: ");
	scanf("%d\n", &a);
	printf("%d\n", potencia(a));
}