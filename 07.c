#include <stdio.h>
main(){
	int idade, anos, meses, resto, dias;
	scanf("%d", &idade);
	anos = idade / 365;
	resto = idade % 365;
	meses = resto / 31;
	dias = resto % 31;
	printf("A pesssoa tem %d anos, %d meses e %d dias", anos, meses, dias);
}
