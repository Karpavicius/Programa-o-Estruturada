#include <stdio.h>
#include <stdlib.h>

int main(void){
	float n1, n2, soma;
	float media;
	printf("informe duas notas\n");
	scanf("%f%f", &n1, &n2);
	if(n1>=0.0 &&n1<=10.0){
		if(n2>=0.0 &&n1<=10.0){
			soma=n1+n2;
			printf("o resultado eh %f\n", soma);

			media=soma/2;
			printf("o resultado eh %f\n", media);
}
}
	else{
		printf("n1||n1 invalido");
}
	return 0;
}
 