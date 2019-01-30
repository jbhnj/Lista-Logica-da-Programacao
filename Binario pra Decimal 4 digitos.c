#include <stdio.h>
main(){
	
	int num, v1, v2, v3, v4;
	
	printf("Digite o numero de 4 digitos a ser convertido \n");
	scanf("%d", &num);
	
	v1 = num % 2;
	v2 = ((num - v1) / 2) % 2;
	v3 = ((num - (v2*10 + v1)) / 20) %2;
	v4 = num / 1000;
	
	printf("O numero decimal eh %d", ((v4 * 2 * 2 * 2) + (v3 * 2 * 2) + (v2 * 2) + v1));
}
