#include <stdio.h>
main(){
	float lado1, lado2, lado3, perimetro;
	scanf("%f%f%f", &lado1, &lado2, &lado3);
	perimetro= lado1+ lado2 + lado3;
	printf("O perimetro do triangulo eh %f", perimetro);
}
