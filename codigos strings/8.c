#include <stdio.h>

void main(){
	char str[10];
	int x;
	puts("Digite uma string: ");
	fgets(str,9,stdin);
	for(x=0;str[x]!='\n';x++){
		if((int)str[x]>97&&(int)str[x]<=122){
			str[x]=(int)str[x]-32;
		}
	}
	printf("%s", str);
}