#include <stdio.h>
#define MEDIA 6
#define NUM_ALUNOS 5

struct Aluno{
   int matricula;
   float notas[3];
};
int j,i;
typedef struct Aluno Aluno;
Aluno a;
Aluno LeAluno(){
		printf("Digite a matricula do aluno: ");
		scanf("%d%d%d%d", &a.matricula, &a.notas[0], &a.notas[1], &a.notas[2]);

		return a;
}
void ImprimeTurma(Aluno v[]){
	int pirocoptero;
	for(pirocoptero=0;pirocoptero<NUM_ALUNOS;pirocoptero++){
		printf("%d%d%d%d", v[pirocoptero].matricula, v[pirocoptero].notas[0], v[pirocoptero].notas[1], v[pirocoptero].notas[2]);
	}
}
float CalculaMediaAluno(float v[]){
	float media=0;
	int i;
	
		for(j=0;j<3;j++){
			media+=(float)v[i];
				
	}
	media/=NUM_ALUNOS;
	return media;
}
int NumeroDeAprovados(Aluno v[]){
	int alunos=0;
	float media=0;
	for(i=0;i<NUM_ALUNOS; i++){
		for(j=0;j<3;j++){
			media+=(float)v[i].notas[j];
		}
	media/=3;
		if(media>=MEDIA){
			alunos++;
		}
	}
	return alunos;
}
void SalvarDados(Aluno v[],char nomeArq[]){
	FILE *variavel;
	variavel=fopen(nomeArq, "w");
	for(i=0;i<NUM_ALUNOS;i++){
		fprintf(variavel, "%d %d %d %d", v[i].matricula, v[i].notas[0], v[i].notas[1], v[i].notas[2]);
	}
	fclose(variavel);
}
int main(){
	Aluno Turma[NUM_ALUNOS];
	float media;
	int i;
	for(i=0;i<NUM_ALUNOS;i++)
		Turma[i]=LeAluno();  	
	ImprimeTurma(Turma);

   for(i=0;i<NUM_ALUNOS;i++){
		media=CalculaMediaAluno(Turma[i].notas);
		printf("Aluno %d - Media = %f\n", Turma[i].matricula, media);
	}

	printf("Quantidade de Aprovados = %d\n", NumeroDeAprovados(Turma));
		SalvarDados(Turma,"saida.txt");

   return 0;
}

