#include <stdio.h>

main(){
	
	int valor, v100, v50, v20, v10, v5, v2, v1, aux;
	
	scanf("%d", &valor);
	
	v100 = valor / 100;
	aux = valor % 100;
	v50 = aux / 50;
	aux = aux % 50;
	v20 = aux / 20;
	aux = aux % 20;
	v10 = aux / 10;
	aux = aux % 10;
	v5 = aux / 5;
	aux = aux % 5;
	v2 = aux / 2;
	v1 = aux % 2;
	
	printf("Voce sacou %d\n", valor);
	printf("A quantidade de notas de 100 reais eh %d\n", v100);
	printf("A quantidade de notas de 50 reais eh %d\n", v50);
	printf("A quantidade de notas de 20 reais eh %d\n", v20);
	printf("A quantidade de notas de 10 reais eh %d\n", v10);
	printf("A quantidade de notas de 5 reais eh %d\n", v5);
	printf("A quantidade de notas de 2 reais eh %d\n", v2);
	printf("A quantidade de notas de 1 real eh %d\n", v1);
}
