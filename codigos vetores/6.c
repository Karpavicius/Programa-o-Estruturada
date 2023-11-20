#include <stdio.h>

void main(){
	int a[6], b[10], i, t, c=0;
	puts("Digite os valores para o gabarito");
	for(i=0;i<6;i++){
		scanf("%d", &a[i]);
	}
	puts("Dgite os valores para o vetor de aposta");
	for(i=0;i<10;i++){
		scanf("%d", &b[i]);
	}
	for(i=0;i<6;i++){
		for(t=0;t<10;t++){
			if(a[i]==b[i]){
				c++;
			}
		}
	}
	printf("O jogador fez %d pontos\n", c);
}