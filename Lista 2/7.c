#include <stdio.h>

void main (){
	int a=1, n, e=1;
	printf ("Valor\n");
	scanf ("%d", &n);
	for (int i=1;i<=n;i++){
		a=1;
		for (int j=i;j>0;j--){
			a*=j;
		}
		e+=1/a;
	}
	printf ("R=%d\n", e);
}