#include <stdio.h>

main(){
	
	int num, v1, v2, v3, v4;
	
	printf("Digite o numero de 4 digitos a ser invertido e que, posteriormente, tera os seus digitos somados \n");
	scanf("%d", &num);
	
	v1 = num % 10;
	v2 = ((num - v1) / 10) % 10;
	v3 = ((num - (v2*10 + v1)) / 100) %10;
	v4 = num / 1000;
	
	printf("A inversao do numero %d eh  %d\n", num, v1*1000 + v2*100 + v3*10 + v4);
	printf("A Soma dos digitos do numero dado eh %d", v1 + v2 + v3 + v4);
}
