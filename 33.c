#include <stdio.h>
main(){
	
	int x, y;
	
	scanf("%d %d", &x, &y);
	
	if(( x == 0) && (y == 0))
		printf("AS coordenadas apontam pra Origem");
	
	else if (( x >= 1) && (y >= 1))
		printf("1 Quadrante");
	
	else if ((x <= -1) && (y >= 1))
		printf("2 Quadrante");
		
	else if ((x <= -1) && (y <= -1))
		printf("3 Quadrante");
	
	else if ((x >= 1) && (y <= -1))
		printf("4 Quadrante");
	
	else
		printf("As cooredenadas estao no eixo");
	
}
