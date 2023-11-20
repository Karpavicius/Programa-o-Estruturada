#include <stdio.h>

void main(){
	char str[10];
	int x, y, c;
	puts("Digite uma string: ");
	fgets(str,9,stdin);
	for(x=0;str[x]!='\n';x++){
		for(y=x+1;str[y]!='\n';y++){
			if(str[x]==str[y]){
				for(c=y;str[c]!='\n';c++){
					str[c]=str[c+1];	
				}
				for(c=x;str[c]!='\n';c++){
					str[c]=str[c+1];
				}
			}
		}
	}
	printf("%s", str);
}