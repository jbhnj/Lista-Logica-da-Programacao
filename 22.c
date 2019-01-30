#include <stdio.h>
main (){
	int num, modulo;
	scanf("%d", &num);
	if (num >= 0)
		modulo = num;
	else
		modulo = num * -1;
	printf("%d", modulo);
}
