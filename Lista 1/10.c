#include <stdio.h>

	int main(){
		int a, a1, b1, b, c, c1, d, e, f;
		puts ("1=triangulo, 2=retangulo, 3=quadrado, 4=circulo");
		scanf ("%d", &a);
		switch (a){
			case 1:
			puts ("digite o valor da base e da altura do triangulo");
			scanf ("%d%d", &b, &c);
			d=(b*c)/2;
			printf("%d\n", d);
			break;
			case 2:
			puts ("digite o valor da base e altura do retangulo");
			scanf ("%d%d", &e, &f);
			e=(e*f);
			printf ("%d\n", e);
			break;
			case 3:
			puts ("digite o valor dos lados do quadrado");
			scanf ("%d", &a1);
			a1*=a1;
			printf("%d\n", a1);
			break;
			case 4:
			puts ("digite o valor do raio do circulo");
			scanf ("%d", &b1);
			c1=3.14*(b1*b1);
			printf ("%d\n", b1);
			break;
		}	

 

		}		