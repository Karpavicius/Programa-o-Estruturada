#include <stdio.h>

void main(){
	int x[5], i, t;
	puts("Digite os valores para o vetor x");
	for(i=0;i<5;i++){
		scanf("%d", &x[i]);
	}
	puts("Digite o codigo:");
	scanf("%d", &t);

	while(t){
		switch(t){
			case 1:
				for(i=0;i<5;i++){
					printf("%d, ", x[i]);
				}
				puts("");
				break;
			case 2:
				for(i=4;i>=0;i--){
					printf("%d, ", x[i]);
				}
				puts("");
				break;
			default:
					puts("Comando inválido");
					break;
		}
		puts("Digite o codigo novamente");
		scanf("%d", &t);
	}
}