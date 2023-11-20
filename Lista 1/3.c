#include <stdio.h>

	int main (){
		int salario;
		puts ("informe o salario");
		scanf ("%d", &salario);
		if (salario<=400){
			salario=((salario*15)/100) + salario;
			printf ("aumento %d\n", salario);
		}	else if (salario>400 && salario<=700){
			salario=((salario*12)/100) + salario;
			printf ("aumento %d\n", salario);

		}	else if (salario>700 && salario<=1000){
			salario=((salario*10)/100) + salario;
			printf ("aumento %d\n", salario);

		}	else if (salario>1000 && salario<=1800){
			salario=((salario*7)/100) + salario;
			printf ("aumento %d\n", salario);


		}	else {
			puts ("sem aumento");
		}

	}