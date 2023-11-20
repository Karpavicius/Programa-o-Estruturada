#include <stdio.h>

void main(){
	char str[10], caracter;
	int posi;
	puts("Digite uma string: ");
	fgets(str,9,stdin);
	puts("Digitr um caracter para substituir e a poricao: ");
	scanf("%c%d", &caracter, &posi);
	str[posi]=caracter;
	printf("%s", str);
}