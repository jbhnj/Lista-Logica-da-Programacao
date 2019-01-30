#include <stdio.h>
main(){
	float celsius, fahrenheit;
	scanf("%f", &fahrenheit);
	celsius = (5*(fahrenheit - 32)) / 9;
	printf("A temperatura em celsius eh %f", celsius);
}
