#include <stdio.h>

void main(){
	char str[10], caracter;
	int x, y;
	puts("Digite uma string: ");
	fgets(str,9,stdin);
	puts("Digite um caracter: ");
	scanf("%c", &caracter);
	for(x=0;str[x]!='\n';x++){
		if(str[x]==caracter){
			for(y=x;str[y]!='\n';y++){
				str[y]=str[y+1];
			}
		}
	}
	printf("%s", str);
}