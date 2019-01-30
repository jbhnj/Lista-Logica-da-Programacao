#include <stdio.h>
main(){
	int num, prim, segu, terc, numinv;
	scanf("%d", &num);
	prim = num % 10;
	segu = ((num - prim) / 10) % 10;
	terc = (num - (segu * 10 + prim)) / 100;
	numinv = (prim * 100) + (segu * 10) + terc;
	printf("O numero invertido eh %d", numinv);
}
