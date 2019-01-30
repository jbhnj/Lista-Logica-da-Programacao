#include <stdio.h>
main(){
	float salario, desconto;
	scanf("%f", &salario);
	desconto = salario * 0.11;
	if (desconto <= 334.29)
		printf("O desconto previdenciario foi de %.2f", desconto);
	else
		printf("O desconto previdenciario foi de 334,29");
}
