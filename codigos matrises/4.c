#include <stdio.h>

void main(){
	int m[5][5], a, b;
	for(a=0;a<5;a++){
		for(b=0;b<5;b++){
			if(a<b){
				m[a][b]=(2*a+7*b)-2;
			}else if(a==b){
				m[a][b]=((3*a)*(3*a))-1;
			}else if(a>b){
				m[a][b]=(((4*a)*(4*a)*(4*a))-((5*b)*(5*b)))+1;
			}
		}
	}
	for(a=0;a<5;a++){
		for(b=0;b<5;b++){
			printf("%d", m[a][b]);
		}
		puts("");
	}
}