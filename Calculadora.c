#include <stdio.h>
main(){
	
	int operacao;
	int numeroa, numerob, resultado;
	
	printf("--------------- CALCULADORA ---------------\n\n");
	printf("Por favor, informe o digito referente a operacao desejada:\n\n");
	printf("1 - SOMA\n");
	printf("2 - SUBTRACAO\n");
	printf("3 - MULTIPLICACAO\n");
	printf("4 - DIVISAO\n\n");
	
	scanf("%d", &operacao);
	printf("\n");
	printf("Agora que ja sei a operacao que devo realizar, por favor me informe os dois operandos:\n\n");
	
	scanf("%d%d", &numeroa, &numerob);
	printf("\n");
	
	switch(operacao){
		case 1: printf("A Operacao a ser realizada sera uma SOMA\n\n");
				resultado = numeroa + numerob;
				printf("O resultado da soma entre %d e %d eh: %d\n\n", numeroa, numerob, resultado);
				break;
		
		case 2: printf("A Operacao a ser realizada sera uma SUBTRACAO\n\n");
				resultado = numeroa - numerob;
				printf("O resultado da subtracao entre %d e %d eh: %d\n\n", numeroa, numerob, resultado);
				break;
		
		case 3: printf("A Operacao a ser realizada sera uma MULTIPLICACAO\n\n");
				resultado = numeroa * numerob;
				printf("O resultado da multiplicacao entre %d e %d eh: %d\n\n", numeroa, numerob, resultado);
				break;
		
		case 4: printf("A Operacao a ser realizada sera uma DIVISAO\n\n");
				resultado = numeroa / numerob;
				printf("O resultado da divisao entre %d e %d eh: %d\n\n", numeroa, numerob, resultado);
				printf("Estou ignorando o resto da divisao. Caso voce necessite, por favor, me informe que incluirei na versao 2.0.\n");
				break;
	}
	printf("Espero ter ajudado! Qualquer duvida, estou a disposicao. Ass: Joao");
}
