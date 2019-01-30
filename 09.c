#include <stdio.h>
main(){
	float pi, raio, altura, volume;
	pi = 3.14;
	scanf("%f%f", &raio, &altura);
	volume = pi * raio * raio * altura;
	printf("O volume da lata de oleo eh %f", volume);
}
