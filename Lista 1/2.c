#include <stdio.h>

	int main (){
		float a, b, c;
		int d;
		puts ("matricula");
		scanf ("%d", &d);
		puts ("número de horas");
		scanf ("%f", &a);
		puts ("valor");
		scanf ("%f", &b);
		c= a*b;
		printf ("salário mensal %.2f\n", c);
	}