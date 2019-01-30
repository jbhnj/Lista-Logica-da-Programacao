#include <stdio.h>
main(){
	
	int nota1, nota2, nota3, nota4, nota5;
	
	scanf("%d %d %d %d %d", &nota1, &nota2, &nota3, &nota4, &nota5);
	
	if ((nota1 >= 70) && (nota2 >= 70) && (nota3 >= 70) && (nota4 >= 70) && (nota5 >= 70))
		printf("A – Passou em todos os exames");
	
	else if (((nota1 >= 70) && (nota2 >= 70) && (nota3 >= 70) && (nota4 >= 70) && (nota5 < 70)) || ((nota1 >= 70) && (nota2 >= 70) && (nota3 < 70) && (nota4 >= 70) && (nota5 >= 70)))
		printf("B – passou em I, II e IV, mas nao em III ou V");
	
	else if (((nota1 >= 70) && (nota2 >= 70) && (nota3 >= 70) && (nota4 < 70) && (nota5 < 70)) || ((nota1 >= 70) && (nota2 >= 70) && (nota3 < 70) && (nota4 >= 70) && (nota5 < 70)))
		printf("C – passou em I e II, III ou IV, mas nao em V");
	
	else
		printf("Reprovado – outras situaçoes");
}
