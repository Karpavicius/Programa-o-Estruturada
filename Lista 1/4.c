#include <stdio.h>

int main (){
	int a, b, c;
	float media;
	scanf ("%d%d%d", &a, &b, &c);
	if (a>=b && a>=c){
		media=(float)((a*5)+(b*2.5)+(c*2.5))/10;
		printf ("media%.2f\n", media);
	}
	if (b>=a && b>=c){
		media=(float)((b*5)+(a*2.5)+(c*2.5))/10;
		printf ("media%.2f\n", media);
	}
	if (c>=b && c>=a){
		media=(float)((c*5)+(b*2.5)+(a*2.5))/10;
		printf ("media%.2f\n", media);
	}
}