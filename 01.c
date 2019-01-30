#include <stdio.h>

main(){
	float base, altura, area, perimetro;
	scanf("%f%f", &base, &altura);
	perimetro= 2*(base+altura);
	area= base*altura;
	printf("O perimetro mede %fm\n", perimetro);
	printf("A area mede %fm2", area);
}
