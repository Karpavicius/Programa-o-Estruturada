#include <stdio.h>
int valor(int x, int y){
	if(y==1){
		return x;
	}
	else{
		return x*valor(x, y-1);

	}
}
int main(){
	int x, y;
	puts("Digite um valor para x e y: ");
	scanf("%d%d", &x, &y);
	printf("%d\n", valor(x, y));
}