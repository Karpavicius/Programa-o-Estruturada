#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void validarVariavel(int *c, int *d);

int main (){
	int campoReal[10][10], campoImagem[10][10], verif[10][10], i, j, l=1, z;
	int  a[10], b[10], c, d, p, q, r, s, cont=0;

	//populando matriz Real

	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			campoReal[i][j]=0;
		}
	}

	for(i=0; i<10; i++){
		a[i]= rand() % 10;
	//	printf("%d ", a[i]);
	}
	puts("");

	for(i=0; i<10; i++){
		b[i]= rand() % 10;
	//	printf("%d ", b[i]);
	}
	puts("");

	for(i=0; i<10; i++){
		if(campoReal[a[i]][b[i]]==0){
			campoReal[a[i]][b[i]]=9;
		}else if(campoReal[b[i]][a[i]]==0){
			campoReal[b[i]][a[i]]=9;
		}
	}

	/*for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			printf("%d ", campoReal[i][j]);		
		}
		puts("");
	}*/

	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(campoReal[i][j]!=9){
				if(campoReal[i-1][j-1]==9 && i!=0 && j!=0){
					campoReal[i][j]++;
				}
				if(campoReal[i-1][j]==9 && i!=0){
					campoReal[i][j]++;
				}
				if(campoReal[i-1][j+1]==9 && i!=0 && j!=9){
					campoReal[i][j]++;
				}
				if(campoReal[i][j-1]==9 && j!=0){
					campoReal[i][j]++;
				}
				if(campoReal[i][j+1]==9 && j!=9){
					campoReal[i][j]++;
				}
				if(campoReal[i+1][j-1]==9 && i!=9 && j!=0){
					campoReal[i][j]++;
				}
				if(campoReal[i+1][j]==9 && i!=9){
					campoReal[i][j]++;
				}
				if(campoReal[i+1][j+1]==9 && i!=9 && j!=9){
					campoReal[i][j]++;
				}
			}
		}
	}

	//Populando matriz Imagem

	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			campoImagem[i][j]=0;
		}
	}

	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(campoReal[i][j]==9){
				verif[i][j]=0;
			}else{
				verif[i][j]=1;
			}
		}
	}

	//jogando

	do{
		for(i=0; i<10; i++){
			for(j=0; j<10; j++){
				if(campoImagem[i][j]==0){
					printf("%c ", 178);
				}else{
					printf("%d ", campoReal[i][j]);
				}
			}
			puts("");
		}

		validarVariavel(&c, &d);
		cont++;

		system("cls");

		//verificando se a posição não está sobreescrevendo algum valor

		if(campoImagem[c][d]==1){
			puts("Posição já ocupada. Digite novamente.");
			cont--;
		}else if(campoReal[c][d]==0){
			//abrindo campos adjacentes em branco
			for(i=c; i<=9; i++){
						for(j=d; j<=9; j++){
							if(campoImagem[c][j]!=1 && campoReal[c][j]==0){
								campoImagem[c][j]=1;
								cont++;
							}else if(campoReal[c][j]!=0){
								campoImagem[c][j]=1;
								cont++;
								break;
							}
						}
					if(campoImagem[i][d]!=1 && campoReal[i][d]==0){
						campoImagem[i][d]=1;
						cont++;
					}else if(campoReal[i][d]!=0){
						campoImagem[i][d]=1;
						cont++;
						break;
					}
				}
				for(i=c; i>=0; i--){
						for(j=d; j>=0; j--){
							if(campoImagem[c][j]!=1 && campoReal[c][j]==0){
								campoImagem[c][j]=1;
								cont++;
							}else if(campoReal[c][j]!=0){
								campoImagem[c][j]=1;
								cont++;
								break;
							}
						}
					if(campoImagem[i][d]!=1 && campoReal[i][d]==0){
						campoImagem[i][d]=1;
						cont++;
					}else if(campoReal[i][d]!=0){
						campoImagem[i][d]=1;
						cont++;
						break;
					}
				}
			for(s=0; campoReal[c-s][d-s]==0 && c-s>=0 && d-s>=0; s++){
				for(i=c-s; i<=9; i++){
						for(j=d-s; j<=9; j++){
							if(campoImagem[c-s][j]!=1 && campoReal[c-s][j]==0){
								campoImagem[c-s][j]=1;
								cont++;
							}else if(campoReal[c-s][j]!=0 && campoReal[c-s][j]!=9){
								campoImagem[c-s][j]=1;
								cont++;
								break;
							}
						}
					if(campoImagem[i][d-s]!=1 && campoReal[i][d-s]==0){
						campoImagem[i][d-s]=1;
						cont++;
					}else if(campoReal[i][d-s]!=0 && campoReal[i][d-s]!=9){
						campoImagem[i][d-s]=1;
						cont++;
						break;
					}
				}
				for(i=c-s; i>=0; i--){
						for(j=d-s; j>=0; j--){
							if(campoImagem[c-s][j]!=1 && campoReal[c-s][j]==0){
								campoImagem[c-s][j]=1;
								cont++;
							}else if(campoReal[c-s][j]!=0){
								campoImagem[c-s][j]=1;
								cont++;
								break;
							}
						}
					if(campoImagem[i][d-s]!=1 && campoReal[i][d-s]==0){
						campoImagem[i][d-s]=1;
						cont++;
					}else if(campoReal[i][d-s]!=0){
						campoImagem[i][d-s]=1;
						cont++;
						break;
					}
				}
			}
			for(r=0; campoReal[c-r][d+r]==0 && c-r>=0 && d+r<10; r++){
				for(i=c-r; i<=9; i++){
						for(j=d+r; j<=9; j++){
							if(campoImagem[c-r][j]!=1 && campoReal[c-r][j]==0){
								campoImagem[c-r][j]=1;
								cont++;
							}else if(campoReal[c-r][j]!=0 && campoReal[c-r][j]!=9){
								campoImagem[c-r][j]=1;
								cont++;
								break;
							}
						}
					if(campoImagem[i][d+r]!=1 && campoReal[i][d+r]==0){
						campoImagem[i][d+r]=1;
						cont++;
					}else if(campoReal[i][d+r]!=0 && campoReal[i][d+r]!=9){
						campoImagem[i][d+r]=1;
						cont++;
						break;
					}
				}
				for(i=c-r; i>=0; i--){
						for(j=d+r; j>=0; j--){
							if(campoImagem[c-r][j]!=1 && campoReal[c-r][j]==0){
								campoImagem[c-r][j]=1;
								cont++;
							}else if(campoReal[c-r][j]!=0){
								campoImagem[c-r][j]=1;
								cont++;
								break;
							}
						}
					if(campoImagem[i][d+r]!=1 && campoReal[i][d+r]==0){
						campoImagem[i][d+r]=1;
						cont++;
					}else if(campoReal[i][d+r]!=0){
						campoImagem[i][d+r]=1;
						cont++;
						break;
					}
				}
			}
			for(q=0; campoReal[c+q][d-q]==0 && c+q>=0 && d-q>=0; q++){
				for(i=c+q; i<=9; i++){
						for(j=d-q; j<=9; j++){
							if(campoImagem[c+q][j]!=1 && campoReal[c+q][j]==0){
								campoImagem[c+q][j]=1;
								cont++;
							}else if(campoReal[c+q][j]!=0 && campoReal[c+q][j]!=9){
								campoImagem[c+q][j]=1;
								cont++;
								break;
							}
						}
					if(campoImagem[i][d-q]!=1 && campoReal[i][d-q]==0){
						campoImagem[i][d-q]=1;
						cont++;
					}else if(campoReal[i][d-q]!=0 && campoReal[i][d-q]!=9){
						campoImagem[i][d-q]=1;
						cont++;
						break;
					}
				}
				for(i=c+q; i>=0; i--){
						for(j=d-q; j>=0; j--){
							if(campoImagem[c+q][j]!=1 && campoReal[c+q][j]==0){
								campoImagem[c+q][j]=1;
								cont++;
							}else if(campoReal[c+q][j]!=0){
								campoImagem[c+q][j]=1;
								cont++;
								break;
							}
						}
					if(campoImagem[i][d-q]!=1 && campoReal[i][d-q]==0){
						campoImagem[i][d-q]=1;
						cont++;
					}else if(campoReal[i][d-q]!=0){
						campoImagem[i][d-q]=1;
						cont++;
						break;
					}
				}
			}
			for(p=0; campoReal[c+p][d+p]==0 && c+p>=0 && d+p>=0; p++){
				for(i=c+p; i<=9; i++){
						for(j=d+p; j<=9; j++){
							if(campoImagem[c+p][j]!=1 && campoReal[c+p][j]==0){
								campoImagem[c+p][j]=1;
								cont++;
							}else if(campoReal[c+p][j]!=0 && campoReal[c+p][j]!=9){
								campoImagem[c+p][j]=1;
								cont++;
								break;
							}
						}
					if(campoImagem[i][d+p]!=1 && campoReal[i][d+p]==0){
						campoImagem[i][d+p]=1;
						cont++;
					}else if(campoReal[i][d+p]!=0 && campoReal[i][d+p]!=9){
						campoImagem[i][d+p]=1;
						cont++;
						break;
					}
				}
				for(i=c+p; i>=0; i--){
						for(j=d+p; j>=0; j--){
							if(campoImagem[c+p][j]!=1 && campoReal[c+p][j]==0){
								campoImagem[c+p][j]=1;
								cont++;
							}else if(campoReal[c+p][j]!=0){
								campoImagem[c+p][j]=1;
								cont++;
								break;
							}
						}
					if(campoImagem[i][d+p]!=1 && campoReal[i][d+p]==0){
						campoImagem[i][d+p]=1;
						cont++;
					}else if(campoReal[i][d+p]!=0){
						campoImagem[i][d+p]=1;
						cont++;
						break;
					}
				}
			}	
		}else{
			campoImagem[c][d]=1;
		}

		//verificando se o jogo terminou

		z=0;
		for(i=0; i<10; i++){
			for(j=0; j<10; j++){
				if(campoImagem[i][j]==1 && verif[i][j]==1){
					z++;
				}
			}
		}
		printf("%d\n", z);

		if(campoReal[c][d]==9){
			l=0;
			printf("KABOOOOOOOOOOOM\nVoc%c perdeu!\n", 136);

			for(i=0; i<10; i++){
				for(j=0; j<10; j++){
					if(campoReal[i][j]!=9){
						printf("%d ", campoReal[i][j]);
					}else{
						printf("%c ", 155);
					}
				}
				puts("");
			}
		}else if(z==90){
			l=0;
			printf("PARABENS!!!!!!!!\nVOCE GANHOU!\n\n");
			for(i=0; i<10; i++){
				for(j=0; j<10; j++){
					if(campoReal[i][j]!=9){
						printf("%d ", campoReal[i][j]);
					}else{
						printf("%c ", 155);
					}
				}
				puts("");
			}
		}
	}while(l);
}

void validarVariavel(int *c, int *d){
	do{
		printf("Digite a posi%c%co da linha (0 a 9)\n", 135, 198);
		scanf("%d", c);
		if((*c)>9){
			printf("Valor inv%clido, digite novamente.\n", 160);
		}
	}while((*c)>9);
	do{
		printf("Digite a posi%c%co da coluna (0 a 9)\n", 135, 198);
		scanf("%d", d);
		if((*d)>9){
			printf("Valor inv%clido, digite novamente.\n", 160);
		}
	}while((*d)>9);
}
