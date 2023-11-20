#include <stdio.h>

void main(){
	int vet[10],x,media=0,curva,soma=0;
	for(x=0;x<10;x++){
	printf("Digite um valor para a posição %d do vetor: ",x);
	scanf("%d",&vet[x]);
	media+=vet[x];
	}
	media/=10;
	for(x=0;x<10;x++){
	soma+=(vet[x]-media)*(vet[x]-media);	
}
	curva=sqrt((1/9)+soma);
	
	printf("Curva= %d",curva);
}