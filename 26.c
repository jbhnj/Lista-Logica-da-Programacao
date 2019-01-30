#include <stdio.h>
main(){
	int num1, num2, num3, maiores;
	scanf("%d%d%d", &num1, &num2, &num3);
	if ((num1 <= num2) && (num1 <= num3))
		maiores = num2 + num3;
	else if ((num2 <= num1) && (num2 <= num3))
		maiores = num1 + num3;
	else
		maiores = num1 + num2;
	printf("A soma dos dois maiores numeros eh %d", maiores);
}
