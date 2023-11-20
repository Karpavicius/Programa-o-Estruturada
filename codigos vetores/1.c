#include <stdio.h>

void main(){
	int vet[5], x;
	puts("vetor");
	for(int i=0;i<5;i++){
		scanf("%d", &vet[i]);
	}
	puts("Valor a ser encontrado");
	scanf("%d", &x);
	for(int i=0;i<5;i++){
		if(x==vet[i]){
			printf("Numero %d esta na posicao %d\n", x, i);
		}
	}
}