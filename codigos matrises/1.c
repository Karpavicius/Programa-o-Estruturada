#include <stdio.h>

void main(){
	int m[4][4], a, b, maior, a1, b1;

	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			puts("Digite um valor: ");
			scanf("%d", &m[a][b]);
		}
	}
maior=m[0][0];
a1=b1=0;
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			if(m[a][b]>maior){
				maior=m[a][b];
				a1=a;
				b1=b;
			}
		}
	}
	printf("O maior valor e: %d\n Linha: %d\n Coluna: %d\n", maior, a1, b1);	
}