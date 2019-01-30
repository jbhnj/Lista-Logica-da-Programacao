#include <stdio.h>
main(){
	
	int num, mil, cen, dez, uni, resto, dv;
	
	scanf("%d", &num);
	printf("\n");
	
	mil = num / 1000;
	cen = (num % 1000) / 100;
	dez = ((num % 1000) % 100) / 10;
	uni = ((num % 1000) % 100) % 10;
	
	resto = ((mil * 5) + (cen * 4) + (dez * 3) + (uni * 2)) % 11;
	
	dv = 11 - resto;
	
	if (dv == 10)
		printf("%d - %d (X)", num, dv);
	else
		printf("%d - %d", num, dv);
}
