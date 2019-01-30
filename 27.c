#include <stdio.h>
main(){
	float num1, num2, num3, maior, mediap;
	scanf("%f%f%f", &num1, &num2, &num3);
	if ((num1 >= num2) && (num1 >= num3)){
		maior = num1;
		mediap = ((num1 * 5) + (num2 * 2.5) + (num3 * 2.5)) / 10;}
	else if ((num2 >= num1) && (num2 >= num3)){
		maior = num2;
		mediap = ((num2 * 5) + (num1 * 2.5) + (num3 * 2.5)) / 10;}
	else{
		maior = num3;
		mediap = ((num3 * 5) + (num1 * 2.5) + (num2 * 2.5)) / 10;}
	printf("A media ponderada das tres notas eh %.2f", mediap);
}
