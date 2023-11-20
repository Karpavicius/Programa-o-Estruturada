#include <stdio.h>

void main(){
	int vet[5],a,con=0;
	puts("Valores diferentes");
	for(int i=0;i<5;i++){
		if(i>0){
			scanf("%d", &a);
			for(int j=0;j<i;j++){
				if(vet[i]==a){
					con++;
				}
			}if(con==0){
				vet[i]=a;
			}else{
				puts("Numero invalido");
				i--;
				con--;
			}
		}else{
			scanf("%d", vet[i]);
		}
	}for(int i=0;i<5;i++){
		printf("%d\n", vet[i]);
	}
}