#include <stdio.h>
#include <math.h>
struct ponto{
	int x, y;
	
};
typedef struct ponto Ponto;
float distPonto (Ponto p1, Ponto p2){

float m=sqrt(pow(p2.x-p1.x, 2)+pow(p2.y-p1.y, 2));
return m;

}

int main(){
	Ponto a, b;
	printf("Digite o valor de p1 e p2: ");
	scanf("%d%d%d%d", &a.x, &a.y, &b.x, &b.y);

	printf("%f", distPonto(a, b));

}