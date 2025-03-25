#include <stdio.h>
#include <stdlib.h>

typedef struct cel
{
	int conteudo;
	struct cel *prox;
}celula;

void inserirInicio(celula **coroa, int valor){
	celula *nova = (celula*)malloc(sizeof(celula));
	nova->conteudo = valor;
	nova->prox = *coroa;
	*coroa = nova;
}

void inserirFim(celula **coroa, int valor){
	celula *nova = (celula*)malloc(sizeof(celula));
	nova->conteudo = valor;
	nova->prox = NULL;

	if (*coroa == NULL){
		*coroa = nova;
		return;
	}
	
	celula *aux = *coroa;
	while(aux!=NULL){
		if(aux->prox == NULL){
			aux->prox = nova;
			break;
		}
		aux = aux->prox;
	}
}

void imprimir(celula *aux){
	while(aux!=NULL){
		printf("%d -> ", aux->conteudo);
		aux = aux->prox;
	}
	printf("NULL\n");
}

int main(int argc, char const *argv[])
{
	int op = -1;
	int valor;
	celula *coroa = NULL;
	do{
		printf("1 - Inserir no inicio\n");
		printf("2 - Inserir no fim\n");
		printf("3 - Imprimir\n");
		printf("0 - Encerrar programa\n");
		scanf("%d", &op);

		if (op==1){
			printf("Qual valor você deseja inserir?\n");
			scanf("%d", &valor);
			inserirInicio(&coroa, valor);
			//system("PAUSE");
			system("CLS");
		}

		else if(op==2){
			printf("Qual valor você deseja inserir?\n");
			scanf("%d", &valor);
			inserirFim(&coroa, valor);
			system("CLS");
		}

		if (op==3)
		{
			imprimir(coroa);
		}
	}while(op!=0);
	return 0;
}