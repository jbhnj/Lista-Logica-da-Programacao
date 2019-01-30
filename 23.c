#include <stdio.h>
main(){
	int num, resto;
	scanf("%d", &num);
	resto = num % 2;
	if (resto == 0)
		printf("O numero eh par");
	else
		printf("O numero nao eh par");	
}
