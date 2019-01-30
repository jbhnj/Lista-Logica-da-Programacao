#include <stdio.h>

main(){
	
	float nota1, nota2, nota3, nota4, media;
	
	scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
	
	if ((nota1 < nota2) && (nota1 < nota3) && (nota1 < nota4))
		media = (nota2 + nota3 + nota4) / 3;
		
	else if ((nota2 < nota1) && (nota2 < nota3) && (nota2 < nota4))
		media = (nota1 + nota3 + nota4) / 3;
		
	else if ((nota3 < nota1) && (nota3 < nota2) && (nota3 < nota4))
		media = (nota1 + nota2 + nota4) / 3;
		
	else
		media = (nota1 + nota2 + nota3) / 3;
	
	printf("A media desejada eh %f", media);
}
