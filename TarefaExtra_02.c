// Programa DESENVOLVIDO pelos alunos: Daniel Henrique & Henrique Hangai

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto{
	int cod;
	int quant;
	float valor;
} tipo_produto; 

int main() {
	tipo_produto hangs;
	tipo_produto teste[2];
	int i,n,total=0;
	float estoque=0;
	
	printf("Quantos produtos serao inseridos?\n");
	scanf("%d", &i);
	
	i=i+1;
	printf("\n");
	
	for(n=1; n<i; n++){
		printf("Contato %d\n", n);
		printf("Insira o CODIGO do produto:\n");
		scanf("%d*c", &hangs.cod);
		printf("Qual a QUANTIDADE do produto em ESTOQUE?\n");
		scanf("%d%*c", &hangs.quant);
		printf("Qual o VALOR do produto?\n");
		scanf("%f%*c", &hangs.valor);
		
		total = total + hangs.quant;
		teste[n] = hangs;	
		
		printf("\n");
	}
	
	printf("TOTAL DE PRODUTOS EM ESTOQUE: %d \n", total);
	printf("\n");
	
	for(n=1;n<i;n++){
		estoque = teste[n].quant*100;
		estoque = estoque/total;
		if(estoque<5){
			printf("Produto %d com ESTOQUE<5%%\n", teste[n].cod);
		}
	}
	
	printf("\n\n\nPrograma DESENVOLVIDO pelos alunos: Daniel Henrique & Henrique Hangai");
	
/*	for(n=1;n<3;n++){
		printf("produto %d -- quantidade %d -- valor $%.2f \n", teste[n].cod, teste[n].quant, teste[n].valor);
	}	
*/	
	return 0;
}
