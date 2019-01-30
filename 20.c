#include <stdio.h>
main(){
	float valor, entrada;
	int parcelas;
	scanf("%f", &valor);
	parcelas = valor / 3;
	entrada = parcelas + (valor - parcelas * 3);
	printf("A entrada ficara no valor de %.2f e as parcelas serao de %d", entrada, parcelas);
}
