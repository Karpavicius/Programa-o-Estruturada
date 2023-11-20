#include <stdio.h>
#include <math.h>

	int main (){
		int x1, y1, p1, a, d;
		int x2, y2, p2, b;
		puts("forme as coordeadas x1 y1");
		scanf ("%d%d", &x1, &y1);
		puts ("forme as coordenadas x2 y2");
		scanf ("%d%d", &x2, &y2);
		p1=x2-x1;
		p2=y2-y1;
		a=p1*p1;
		b=p2*p2;
		d=sqrt (a+b);

	}
