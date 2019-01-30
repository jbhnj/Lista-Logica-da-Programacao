#include <stdio.h>
main(){
	
	int ano;
	
	scanf("%d", &ano);
	
	if (ano % 4 == 0 && ano % 100 != 0)
		printf("O ano eh bissexto");
	
	else if (ano % 400 == 0)
		printf("O ano eh bissexto");
		
	else
		printf("O ano nao eh bissexto");
}
