#include <stdio.h>
main(){
	int numa, numb, numc, maior;
	scanf("%d%d%d", &numa, &numb, &numc);
	if ((numa >= numb) && (numa >= numc))
		maior = numa;
	else if ((numb >= numa) && (numb >= numc))
		maior = numb;
	else
		maior = numc;
	printf("O maior numero eh %d", maior );
}
