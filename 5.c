#include <stdio.h>
#include <math.h>

void main (){
	int pmotorista, pbomba, diferenca, resp_subtracao;
	scanf("%d%d", &pmotorista, &pbomba);
	if(pmotorista==pbomba){
		puts("0");
	}else{
		resp_subtracao = pbomba - pmotorista;
		printf ("\ndiferenca = %d", resp_subtracao);
	}
}