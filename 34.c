#include <stdio.h>
main(){
	
	float rmen, vemp, valorprest;
	int nprest;
	
	scanf ("%f %f %d", &rmen, &vemp, &nprest);
	
	valorprest = vemp / nprest;
	
	if ((rmen >= vemp / 10) && (valorprest <= rmen * 0.3))
		printf("O emprestimo sera concedido");
	else
		printf("Nao sera possivel");
	
}
