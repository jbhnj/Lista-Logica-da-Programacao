#include <stdio.h>
#include <stdlib.h>

main(){
	
	int P, Q, R;
	scanf ("%d%d%d", &P, &Q, &R);
	
	if ((Q == 0) && (R == 1))
		printf("C");
	else if ((Q == 0) && (R == 0))
		printf("D");
	else if ((Q == 1) && (P == 0))
		printf("B");
	else
		printf("A");	
}
