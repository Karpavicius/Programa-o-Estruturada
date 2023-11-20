#include <stdio.h>

void main(){
	int soma[5],x,tam,maior,menor,c,i,j;
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tam);
	int a[tam],h[tam/2];
	for(x=0;x<tam;x++){
	printf("Digite um valor: ");
	scanf("%d",&a[x]);
	}
	for(j=0;j<tam/2;j++){
	for(x=0;x<tam;x++){
		if(a[x]>-1){
		if(a[x]>maior){
		maior=a[x];
		c=x;
		}else if(a[x]<menor){
		menor=a[x];
		i=x;
	}
	}
}
	a[i]=a[c]=-1;
	h[j]=maior+menor;
}
	
	
	for(x=0;x<tam/2;x++){
		if(h[0]!=h[x]){
	puts("Desbalaceados");
	break;
	}
	}
	if(x==tam/2){
	puts("Balanceados");
	}
}


