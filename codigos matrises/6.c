#include <stdio.h>
#include <math.h>

void main(){
	int m[4][4], soma=0, a, b;
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			m[a][b]=rand()%10;
		}
	}
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			if(a!=b&&a+b!=3){
				soma+=m[a][b];
			}
		}
	}
	printf("soma: %d", soma);
}