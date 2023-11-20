#include <stdio.h>

void main(){
	int m[4][4], a, b;

	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			m[a][b]=rand()%10;
		}
	}
	puts("A matriz e \n\n");

	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			printf("%d", m[a][b]);
		}
		puts("");
	}
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			m[a][b]*=m[b][a];
		}
	}
	printf("A matriz multiplicada por ela mesma e igual a \n\n");

	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			printf("%d", m[a][b]);
		}
		puts("");
	}
}