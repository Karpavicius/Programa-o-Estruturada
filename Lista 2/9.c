#include <stdio.h>

void main (){
	int a=0, b=1, c, d;
	printf ("Digite um numero\n");
	scanf ("%d", &c);
	for (int i=0;i<=c-2; i++){
		d=b;
		b+=a;
		printf("%d ",b);
a=d;
	}
}