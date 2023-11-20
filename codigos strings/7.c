#include <stdio.h>

void main(){
	char str[10];
	int x, y;
	puts("Digite uma string: ");
	fgets(str,9,stdin);
	for(x=0;str[x]!='\n';x++);
		x--;
	for(y=0;str[y]!='\n'&&x>0;y++, x--){
		if(str[x]!=str[y]){
			y=1;
			printf("%s nao e palindrome", str);
			break;
		}
	}
	if(y!=1){
		printf("%s e palindorme", str);
	}
}