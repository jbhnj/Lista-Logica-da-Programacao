#include <stdio.h>

main(){
	
	int num, grupo;
	
	printf("Digite o numero para saber a qual grupo ele pertence  ");
	scanf("%d", &num);
	
	grupo = ((num % 100) - 1) / 4;
	
	printf("O grupo ao qual o numero pertence eh %d", grupo + 1);
}
