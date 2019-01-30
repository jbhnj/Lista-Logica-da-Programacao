#include <stdio.h>

main(){
	
	int num, v1, v2, v3, numinv, soma;
	
	printf("Digite o numero a ser invertido e posteriormente soma dos digitos \n");
	scanf("%d", &num);
	
	v1 = (num % 10);
	v2 = ((num - v1) / 10) % 10;
	v3 = ((num - (v2 * 10 + v1)) / 100);
	
	printf("O invertido de %d eh  %d\n", num, v1*100 + v2*10 + v3);
	printf("A soma dos digitos eh %d", v1 + v2 + v3);
}
