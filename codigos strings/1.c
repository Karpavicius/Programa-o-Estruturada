#include <stdio.h>

void main(){
	char a1[10], a2[10];
	printf("Digite uma string: ");
	gets(a1);
	printf("Digite uma string: ");
	gets(a2);

	printf("%s%s", a1,a2);
}