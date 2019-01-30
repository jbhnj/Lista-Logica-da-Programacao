#include <stdio.h>
main(){
	int resto1, resto2, resto3, resto4, resto5, num;
	printf("Digite cinco digitos binarios ");
	scanf("%d %d %d %d %d", &resto1, &resto2, &resto3, &resto4, &resto5);
	num = (16 * resto1) + (8 * resto2) + (4 * resto3) + (2 * resto4) + (1 * resto5);
	printf("O numero inteiro eh %d", num);
}
