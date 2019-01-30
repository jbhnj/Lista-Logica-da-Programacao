#include <stdio.h>
main(){
	
	char di;
	
	scanf("%c", &di);
	
	if ((di == 'a') || (di == 'e') || (di == 'i') || (di == 'o') || (di == 'u') || (di == 'A') || (di == 'E') || (di == 'I') || (di == 'O') || (di == 'U'))
		printf("Eh uma vogal");

	else if ((di == '0') || (di == '1') || (di == '2') || (di == '3') || (di == '4') || (di == '5') || (di == '6') || (di == '7') || (di == '8') || (di == '9'))
		printf("Eh um numero");
	
	else if ((di == 'b') || (di == 'c') || (di == 'd') || (di == 'f') || (di == 'g') || (di == 'h') || (di == 'j') || (di == 'k') || (di == 'l') || (di == 'm') || (di == 'n') || (di == 'p') || 
			(di == 'q') || (di == 'r') || (di == 's') || (di == 't') || (di == 'v') || (di == 'w') || (di == 'x') || (di == 'y') || (di == 'z') || (di == 'B') || (di == 'C') || (di == 'D') || 
			(di == 'F') || (di == 'G') || (di == 'H') || (di == 'J') || (di == 'K') || (di == 'L') || (di == 'M') || (di == 'N') || (di == 'P') || (di == 'Q') || (di == 'R') || (di == 'S') || 
			(di == 'T') || (di == 'W') || (di == 'V') || (di == 'X') || (di == 'Y') || (di == 'Z'))
		printf("Eh uma consoante");	
	
	else
		printf("Eh um caracter");
			
}
