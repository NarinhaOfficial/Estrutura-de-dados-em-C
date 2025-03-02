#include "stdio.h"
#include <stdlib.h>

typedef struct cel
{
	int conteudo;
	struct cel *prox;
}celula;

void inserir_inicio(celula **coroa, int valor){
	//Criando minha nova variável e alocando memória pra ela
	celula *nova = (celula*)malloc(sizeof(celula));
	//Eu sou uma nova variável que quero fazer parte do conteúdo e esse conteúdo recebe um valor
	nova->conteudo = valor;
	//Só que pra eu ser o primeiro elemento, eu tenho que apontar pro próximo que tá com a coroa
	nova->prox = *coroa;
	//E pra eu ser rei, a cora tem que ser passada pra mim
	*coroa = nova;
}
void imprimir(celula *aux){
	while(aux!=NULL){
		printf("%d -> ", aux->conteudo);
		aux = aux->prox;
	}
	printf("NULL");
}


int main(int argc, char const *argv[])
{
	celula *coroa = NULL;
	int valor = 0;
	int op = -1;
	do{
		printf("\t\tMENU\n");
		printf("1 - Inserir no inicio\n");
		printf("2 - Imprimir\n");
		printf("0 - Encerrar o Programa\n");
		scanf("%d", &op);
		
		if (op==1){
			printf("Qual valor voce deseja inserir?\n");
			scanf("%d", &valor);

			inserir_inicio(&coroa, valor);
			system("PAUSE");
			system("CLS");
		}
		else if (op==2)
			imprimir(coroa);
		else if(op==0)
			printf("Programa encerrado!");
		else
			printf("ERRO");
	}
	while(op!=0);
	return 0;
}