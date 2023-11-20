#include <stdio.h>

void main(){
	int m[5][5], a, b, c, contlin=0, contcol=0;
	for(a=0;a<5;a++){
		for(b=0;b<5;b++){
			printf("Digite um valor: ");
			scanf("%d", &m[a][b]);
		}
	}
	for(a=0;a<5;a++){
		for(b=0;b<5;b++){
			if(m[a][b]!=0){
				break;
			}
		}
		if(b==5){
			contcol++;
		}
		for(b=0;b<5;b++){
			if(m[b][a]!=0){
				break;
			}
		}
		if(b==5){
			contlin++;
		}
	}
	for(a=0;a<5;a++){
		for(b=0;b<5;b++){
			printf("%d",m[a][b]);
		}
		puts("");
	}
	puts("*************");
	printf("Colunas: %d\nLinhas: %d\n", contcol, contlin);
}