#include <stdio.h>
main(){
	char letra;
	scanf("%c", &letra);
	if ((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u') || (letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U'))
		printf("A letra digitada eh uma vogal");
	else
		printf("A letra digitada eh uma consoante");
}
