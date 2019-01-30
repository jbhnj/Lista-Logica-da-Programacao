#include <stdio.h>
main(){
	float n1b1, n2b1, n1b2, n2b2, media;
	printf("Informe as notas do 1 bimestre ");
	scanf("%f%f", &n1b1, &n2b1);
	printf("Informe as notas do 2 bimestre ");
	scanf("%f%f", &n1b2, &n2b2);
	media = (n1b1+n2b1+n1b2+n2b2) / 4;
	printf("A nota semestral eh %f", media);
			
}
