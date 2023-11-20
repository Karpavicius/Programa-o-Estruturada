#include <stdio.h>

void main (){
	int a=0, b=1, c;
	do{
		scanf ("%d", &c);
		if (c%2==0){
			a+=c;
		}else {
			b*=c;
		}
	}while (c!=0);
	printf ("Pares %d Impar %d\n", a, b);
}