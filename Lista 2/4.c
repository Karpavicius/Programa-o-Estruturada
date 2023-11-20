#include <stdio.h>

void main (){
	int a, b, x, y, z;
	puts ("Dois valores");
	scanf ("%d%d", &a, &b);
	if (a>b){
		for (x=b; x<=a; x++){
			z=0;
			for (y=2;y<x; y++){
				if (x%y==0){
					z=1;
					break;
				}
				if(z==0){
				printf("%d é primo\n" ,x);
			}
		}
	}
}
}