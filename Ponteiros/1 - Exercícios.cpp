#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Para usar tolower
#include <string.h>

int main(int argc, char const *argv[])
{
	printf("1. Faça um programa que receba o nome e o sexo de uma pessoa, se for do sexo feminino, o programa irá dizer Bem-vinda + nome da pessoa, se for masculino, Bem-vindo + nome da pessoa.\n");	
	char *nome = (char*)malloc(100*sizeof(char));
	char sexo;
	char minuscula;

	printf("Digite seu nome: ");
	scanf("%s", nome);

	do{
		printf("Informe seu sexo: ");
		scanf(" %c", &sexo);
		//sexo = tolower(sexo); //para converter para minúscula
		minuscula = sexo.lower()
	}
	while(sexo!='f' && sexo!='m');
	
	if (sexo=='f'){
		printf("Seja Bem-vinda, %s!", nome);
	}
	else{
		printf("Seja Bem-vindo, %s!", nome);
	}
	free(nome);
	return 0;
}
