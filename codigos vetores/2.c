#include <stdio.h>

void main(){
	int x[5], y[5], i, t, c=0;
	puts("Digite os valores para o vetor x");
	for(i=0;i<5;i++){
		scanf("%d", &x[i]);
	}
	puts("Digite os valores para o vetor y");
	for(i=0;i<5;i++){
		scanf("%d", &y[i]);
	}
	printf("Elementos de x que nao aparecem em y:\n");
	for (i=0;i<5;i++){
		for(t=0;t<5;t++){
			if(x[i]==y[i]){
				c++;
			}
		}
		if(c!=0){
			c=0;
		}else{
			printf("%d", x[i]);
			c=0;
		}
	}
	puts("");
}