#include <stdio.h>

void main (){
	int a=0, b=0, c;
	printf ("Digite um numero\n");
	scanf ("%d", &c);
	for (int i=1; i<c; i++){
		if (c%i==0){
			a++;
			b=b+i;
		}
	}
	if (b==c){
		printf ("Perfeito e possuí %d divisores\n", a);
	}else {
		puts ("Imperfeito");
	}

}