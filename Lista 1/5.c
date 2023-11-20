#include <stdio.h>

	int main(){
		int minutos;
		 puts ("digite o tempo");
		 scanf ("%d", & minutos);
		 if (minutos<=15){
		 	puts ("gratis");
		 	} else if (minutos>15 && minutos<60){
		 	puts ("pagar 1 real");
		 }
		 		else {
		 			puts ("pagar 2 reais");
		 		}
		 }