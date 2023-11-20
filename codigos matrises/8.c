#include <stdio.h>

void main(){
	int m[4][4], a, b, eti[4]={0,0,0,0};
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			m[a][b]=rand()%100;
		}
	}
	for(a=0;a<4;a++){
		eti[a]+=m[a][0]+m[a][1]+m[a][2]+m[a][3]+m[0][a]+m[1][a]+m[2][a]+m[3][a];
	}
	for(a=0;a<4;a++){
		printf("%d", eti[a]);
	}
}