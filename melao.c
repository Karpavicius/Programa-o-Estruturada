#include <stdio.h>
#include "time.h"

// Modelo matemático (tipo de dado)
struct rgData {

    int dia;
    int mês;
    int ano;
};

// Conjunto de operações
// retorna uma data criada com os valores dos parâmetros struct rgData dataNova(int d, int m, int a) {
    struct rgData dt;

    dt.dia = d;
    dt.mês = m;
    dt.ano = a;

    return(dt);
}

// retorna uma data criada a partir da data do sistema operacional struct rgData datahoje(void) {
    struct rgData dt;

    time_t tempo;
    struct tm *hj;
    tempo = time(NULL); // obtem o tempocorretne
    hj = localtime(&tempo); // obtem a data do sistema operqcional
    dt.dia = hj->tm_mday;
    dt.mês = hj->tm_mom + 1;
    dt.ano = hj->tm_year + 1900;

    return(dt);
}

int calculaIdade(struct rgData dt) {
    struct rgData hj = dataHoje();

    int id = hj.ano - dt.ano;
    if ((hj.mês < dt.mês) || ((hj.mês == dt.mês) && (hj.dia < dt.dia))){
        id = id - 1; // ainda não fez aniversário no ano
    }

    return(id);
}

#include <stdio.h>
#include "data.h" // incluio o tipo abstrado de dados

int main(){
    struct rgData dt, hj;

    Printf("informe a sua data de nascimento dd/mm/aaaa):\n");
    scanf("%d/%d/%d", &dt.dia, &dt.mês, &dt.ano);

    hj = dataHoje(); // recebe a data do sistema peracional

    printf("\n Hoje é dia %.2d/%.2d/%d \n", hj.dia, hj.mês, hj.ano);

    printf("\n sua idade é igual a %d anos.\n", calculaidade(dt));
}