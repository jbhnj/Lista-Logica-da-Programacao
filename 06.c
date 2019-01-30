#include <stdio.h>
main(){
	int dividendo, divisor, resto, quociente;
	scanf("%d%d", &dividendo, &divisor);
	quociente = dividendo / divisor;
	resto = dividendo - (divisor * quociente);
	printf("O quociente da divisao eh %d\n", quociente);
	printf("O resto da divisao eh %d", resto);
	
}
