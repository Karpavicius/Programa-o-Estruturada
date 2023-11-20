#include <stdio.h>

	int main (){
		int x, y, z;
		scanf ("%d%d%d", &x, &y, &z);
		if (x<(y+z) || y<(x+z) || z<(x+y)){
			if (x==y && x==z && z==y){
				puts ("trîangulo equilatero");
			}	else if (x!=y || x!=z || z!=y){
				puts ("triangulo isosceles");
			} else{
				puts ("triangulo escaleno");
			}
		}

	}