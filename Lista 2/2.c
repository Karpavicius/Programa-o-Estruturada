#include <stdio.h>

void main (){
	int n;
	puts ("Digite um valor");
	scanf ("%d", &n);
	for (int i=n; i>0; i--){
	for (int y=i; y>0; y--){

		printf ("%d ", y);
	}
puts("");

	}
}