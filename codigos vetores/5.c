#include <stdio.h>

void main(){
	int x[10], i, t, c=0;
	puts("Digite os valores para o vetor x");
		for(int i=0;i<10;i++){
			scanf("%d", &x[i]);
		}

		for(i=0;i<10;i++){
			for(t=x[i];t>1;t--){
				if((x[i])%t==0){
					c++;
				}
			}
			if(c==1){
				printf("%d e primo. Posicao de %d no vetor: %d\n", x[i], x[i], i);
			}
			c=0;
		}
}