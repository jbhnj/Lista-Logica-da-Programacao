#include <stdio.h>
main(){
	
	float litros, desconto, valort;
	char tipoc;
	scanf("%f %c", &litros, &tipoc);
	
	if((litros <= 25) && (tipoc == 'A')){
		valort = (litros * 1.9);
		desconto = valort - (valort * 0.02);}
	else if((litros > 25) && (tipoc == 'A')){
		valort = (litros * 1.9);
		desconto = valort - (valort * 0.04);}
	else if((litros <= 25) && (tipoc == 'G')){
		valort = (litros * 2.7);
		desconto = valort - (valort * 0.03);}
	else{
		valort = (litros * 2.7);
		desconto = valort - (valort * 0.05);}
		
	printf("O valor com desconto eh %.2f", desconto);		
}
