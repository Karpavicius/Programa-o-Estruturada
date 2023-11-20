#include <stdio.h>

void main(){
	char str[10];
	int x;
	puts("Digite uma string de ate 9 caracteres: ");
	fgets(str,9,stdin);
	for(x=0;str[x]!='\n';x++);

	for(;x>=0;x--){
		printf("%c",str[x]);
	}
}