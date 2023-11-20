#include <stdio.h>

void main(){
	int n, b=1, soma=0; 
	puts ("Valores, -1 para sair");
	do{
		scanf ("%d", &n);
		if(n==-1)
			break;

		if(n<7 ){
			for (int i=1;i<=n;i++){
				b*=i;
			}
			printf("Fatorial = %d\n", b);
		}else{
			for(int i=0; i<=n; i++){
				soma+=i;
			}
			printf ("Total = %d\n", soma);
		}
	}while (n != -1);

}