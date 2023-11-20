#include <stdio.h>

void main(){
	char str[10];
	int x, y;
	puts("Digite uma string: ");
	fgets(str,9,stdin);
	for(x=0;str[x]!='\n';x++){
		for(y=x+1;str[y]!='\n';y++){
			if(str[x]==str[y]){
				printf("%c se repete\n",str[x]);
				break;
			}
		}
	}
}