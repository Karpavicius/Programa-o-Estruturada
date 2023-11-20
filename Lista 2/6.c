#include <stdio.h>

void main (){
	int q, w, e, r=1;
	printf ("Digite um numero\n");
	scanf ("%d", &q);
	for (w=1; w<=q; w++){
		for (e=0; e<w; e++){
			printf ("%d ", r);
			r++;
		}
		puts ("");
	}
}