#include <stdio.h>

void main(){
	char str1[10], str2[10];
	int x, posi;
	puts("Digite uma string: ");
	fgets(str1,9,stdin);
	puts("Digite uma string: ");
	fgets(str2,9,stdin);
	puts("Digite uma posicao para concatenar: ");
	scanf("%d", &posi);
	if(posi<=10){
		for(x=posi;x<10;x++){
			str1[x]=str2[x=posi];
		}
		printf("%s", str1);
	}
}