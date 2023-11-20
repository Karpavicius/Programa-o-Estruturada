#include <stdio.h>

void main (){
	int voto=0, can1=0, can2=0, can3=0, nulos=0, brancos=0, qtvotos=0;

	while(1){
		scanf ("%d", &votos);
		if (voto ==0)
			break;
		switch(voto){
			case 1: can 1++; break;
			case 2: can 2++; break;
			case 3: can 3++; break;
			case 4: nulos++; break;
			case 5: brancos++; break;
		}
	}
	printf ("can 1 = %d \n", can1);
	printf ("can 2 = %d \n", can2);
	printf ("can 3 = %d \n", can3);
	printf ("can 4 = %d \n", nulos*100.0 / qtvotos);
	printf ("can 5 = %d \n", brancos*100.0 / qtvotos);
		if(can1>can2 && can1>can3){
	printf ("can 1 = %d \n", can1);
	if (can2>can3){
	printf ("can 2 = %d \n", can2);
	printf ("can 3 = %d \n", can3);
		} else{
		printf ("can 3 = %d \n", can3);
		printf ("can 2 = %d \n", can2);
		}
	} else{
			printf ("can 3 = %d \n", can3);
			if (can1> can2){
				printf ("can 1 = %d \n", can1);
				printf ("can 2 = %d \n", can2);
			}else{
				printf ("can 3 = %d \n", can3);
				printf ("can 1 = %d \n", can1);

			}
		}
	}
}