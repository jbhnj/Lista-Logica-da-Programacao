#include <stdio.h>
main (){
	float raio, area, perimetro, pi;
	pi= 3.14;
	scanf("%f", &raio);
	perimetro= 2*pi*raio;
	area= pi*raio*raio;
	printf("O perimetro da circunferencia eh %f\n", perimetro);
	printf("A area da circunferencia eh %f\n", area);
}
