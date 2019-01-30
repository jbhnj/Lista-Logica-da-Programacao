#include <stdio.h>
main (){
	int num;
	scanf("%d", &num);
	if (num > 0)
		printf("O numero eh positivo");
	else if (num < 0)
		printf("O numero eh negativo");
	else
		printf("O numero eh o zero");
}
