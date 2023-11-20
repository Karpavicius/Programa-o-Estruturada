#include <stdio.h>

void main(){
	int x[5], y[5], i, c=0;
	puts("Digite o valores do vetor x");
	for(int i=0;i<5;i++){
		scanf("%d",&x[i]);
	}
	puts("Digite o valores do vetor y");
	for(int i=0;i<5;i++){
		scanf("%d",&y[i]);
	}

	for(int i=0;i<5;i++){
		if(x[i]!=y[i]){
			puts("Os vetores sao diferentes\n");
			break;
		}else{
			c++;
		}
	}
	if(c==5){
		printf("Os vetores sao iguais\n");
	}
}