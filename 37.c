#include <stdio.h>
main(){
	
	int tipo;
	float area, valor, valordes1, valordes2, totalp;
	
	scanf("%d", &tipo);
	scanf("%f", &area);
	
	switch (tipo){
		
		case 1: 
			valor = area * 50;
			if ((area <= 1000) && (valor > 750)){
				valordes2 = ((valor - 750) * 0.9) + 750;
				totalp = valordes2;
				printf("%.2f", totalp);
			}
			else if ((area > 1000) && (valor > 750)){
				valordes1 = valor * 0.95;
				valordes2 = ((valordes1 - 750) * 0.9) + 750;
				totalp = valordes2;
				printf("%.2f", totalp);
			}
			else
				printf("%.2f\n", valor);
			break;
			
		case 2: 
			valor = area * 100;
			if ((area <= 1000) && (valor > 750)){
				valordes2 = ((valor - 750) * 0.9) + 750;
				totalp = valordes2;
				printf("%.2f", totalp);
			}
			else if ((area > 1000) && (valor > 750)){
				valordes1 = valor * 0.95;
				valordes2 = ((valordes1 - 750) * 0.9) + 750;
				totalp = valordes2;
				printf("%.2f", totalp);
			}
			else
				printf("%.2f\n", valor);
			break;
			
		case 3: 
			valor = area * 150;
			if ((area <= 1000) && (valor > 750)){
				valordes2 = ((valor - 750) * 0.9) + 750;
				totalp = valordes2;
				printf("%.2f", totalp);
			}
			else if ((area > 1000) && (valor > 750)){
				valordes1 = valor * 0.95;
				valordes2 = ((valordes1 - 750) * 0.9) + 750;
				totalp = valordes2;
				printf("%.2f", totalp);
			}
			else
				printf("%.2f\n", valor);
			break;
				
		case 4: 
			valor = area * 250;
			if ((area <= 1000) && (valor > 750)){
				valordes2 = ((valor - 750) * 0.9) + 750;
				totalp = valordes2;
				printf("%.2f", totalp);
			}
			else if ((area > 1000) && (valor > 750)){
				valordes1 = valor * 0.95;
				valordes2 = ((valordes1 - 750) * 0.9) + 750;
				totalp = valordes2;
				printf("%.2f", totalp);
			}
			else
				printf("%.2f\n", valor);
			break;
	}
}
