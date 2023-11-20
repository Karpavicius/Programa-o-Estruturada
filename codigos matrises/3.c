#include <stdio.h>

void main(){
	int m[4][4][3], a, b;
	for(int i=0;i<2;i++){
		for(a=0;a<4;a++){
			for(b=0;b<4;b++){
				m[a][b][i]=rand()%100;
			}
		}
	}
	for(int i=0;i<2;i++){
		for(a=0;a<4;a++){
			for(b=0;b<4;b++){
				printf("%d", m[a][b][i]);
			}
			puts("");
		}
		puts("*******");
	}
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			if(m[a][b][0]>m[a][b][1]){
				m[a][b][2]=m[a][b][0];
			}else{
				m[a][b][2]=m[a][b][1];
			}
		}
	}
	puts("*******");
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			printf("%d", m[a][b][2]);
		}
		puts("");
	}

}