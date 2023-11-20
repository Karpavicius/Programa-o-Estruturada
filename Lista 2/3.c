#include <stdio.h>

void main (){
	int rafa=0, n, soma=0;
	do{
		scanf ("%d", &n);
		if (n>=0){
			soma+=n;

		}else{
			rafa++;
		}
	}while (n!=0);
	printf ("Soma=%d\n rafa=%d\n", soma, rafa);

}	