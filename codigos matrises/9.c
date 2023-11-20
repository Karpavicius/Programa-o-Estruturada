#include <stdio.h>

void main(){
	int m[3][3][3], a, b, c;
	for(c=0;c<2;c++){
		for(a=0;a<3;a++){
			for(b=0;b<3;b++){
				m[a][b][c]=rand()%10;
			}
		}	
	}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			m[a][b][2]=0;
		}
	}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			for(c=0;c<3;c++){
				m[a][b][2]+=m[a][c][0]*m[c][b][1];
			}
		}
	}
	puts("****************");
	for(c=0;c<2;c++){
		for(a=0;a<3;a++){
			for(b=0;b<3;b++){
				printf("%d", m[a][b][c]);
			}
			puts("");
		}
		puts("****************");
	}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("%d", m[a][b][2]);
		}
		puts("");
	}
}	