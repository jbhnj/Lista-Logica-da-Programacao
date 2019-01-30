#include <stdio.h>
main(){
	
	int dia;
	
	scanf("%d", &dia);
	
	if ((dia >= 1) && (dia < 8))
		switch (dia){
		
			case 1: printf("domingo");
					break;
			case 2: printf("segunda");
					break;	
			case 3: printf("terca");
					break;
			case 4: printf("quarta");
					break;
			case 5: printf("quinta");
					break;
			case 6: printf("sexta");
					break;
			case 7: printf("sabado");
					break;
		}
	else
		printf("Erro!! Nao corresponde a qualquer dia da semana valido");	
}
