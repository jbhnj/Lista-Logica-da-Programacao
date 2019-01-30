#include <stdio.h>

main(){
	float lado, area, perimetro;
	scanf("%f", &lado);
	perimetro= 4*lado;
	area= lado*lado;
	printf("O perimetro mede %fm\n", perimetro);
	printf("A area mede %fm2", area);
}
