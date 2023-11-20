#include <stdio.h>

void main(){
	int m[3][3], soma[4]={0,0,0,0}, a, b;
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			scanf("%d", &m[a][b]);
		}
	}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			if(a==b){
				soma[0]+=m[a][b];
			}
			if(a+b==2){
				soma[1]+=m[a][b];
			}
		}
	}
	for(a=0;a<3;a++){
		soma[2]=soma[3]=0;
		for(b=0;b<3;b++){
			soma[2]+=m[a][b];
			soma[3]+=m[a][b];
		}
		if(soma[0]!=soma[1]||soma[1]!=soma[2]){
			break;
		}
	}
	if(a==3){
		printf("");
		printf("Esta matriz e um quadrado magico\n");
		puts("Valores");
		for(a=0;a<4;a++){
			printf("Soma %d: %d\n", a, soma[a]);
		}
	}else{
		printf("Esta matriz nao e um quadrado magico");
	}
}