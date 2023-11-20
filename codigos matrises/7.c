#include <stdio.h>

void main(){
	int m[3][3], a, b, vet[3]={0,0,0};
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("Digite um valor: ");
			scanf("%d", &m[a][b]);
		}
	}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			vet[a]+=m[b][a];
		}
	}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("%d", m[a][b]);
		}
		puts("");
	}
	puts("*************");
	for(a=0;a<3;a++){
		printf("%d", vet[a]);
	}
}