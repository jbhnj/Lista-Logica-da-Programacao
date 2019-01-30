#include <stdio.h>
main(){
	int x, y, aux;
	scanf("%d %d", &x, &y);
	aux = x;
	x = y;
	y = aux;
	printf("As valores permutados sao %d e %d", x, y);
}
