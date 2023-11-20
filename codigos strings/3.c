#include <stdio.h>

void main(){
	char str[10], busca;
	int x, cont=0;
	printf("Digite uma string de ate 9 caracteres: ");
	fgets(str,9,stdin);
	puts("Digite um caracter para saber quantas vezes ele aparece na string digitada: ");
	scanf("%c", &busca);
	for(x=0;str[x]!='\n';x++){
		if(str[x]==busca){
			cont++;
		}
	}
	printf("%c aparece %d vezes na string", busca, cont);
}