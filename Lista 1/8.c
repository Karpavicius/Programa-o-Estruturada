#include <stdio.h>

	int main (){
		int h, i, j;
		puts ("1=+, 2=-, 3=/, 4=*");
		scanf ("%d, &h");
		switch (h){
			case 1:
			puts ("digite dois numeros");
			scanf ("%d%d", &i, &j);
			i+=j;
			printf ("%d", i);
			break;
			case 2:
			puts ("digite dois numeros");
			scanf ("%d%d", &i, &j);
			i-=j;
			printf ("%d", i);
			break;
			case 3:
			puts ("digite dois numeros");
			scanf ("%d%d", &i, &j);
			i/=j;
			printf ("%d", i);
			break;
			case 4:
			puts ("digite dois numeros");
			scanf ("%d%d", &i, &j);
			i*=j;
			printf ("%d", i);
			break;
		}
	}