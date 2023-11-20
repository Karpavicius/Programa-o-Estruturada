#include <stdio.h>

void main (){
	int N, P, X, Y, cont, i;

	while(1){
		scanf("%d %d", &N, &P);
		if (N==0 && P==0)
			break;
		cont=0;
		for (i=0;i<N;i++){
			scanf("%d %d", &X, &Y);
			if (X+Y>=P)
				cont++;
		}
		printf ("%d\n", cont);
	}
}