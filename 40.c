#include <stdio.h>
main(){
	
	int num, x, y;
	scanf("%d", &num);
	
	if (num == 100)
		printf("Cem");
	
	else if (num / 10 != 0 && num % 10 == 0)
	
		switch (num){
			
			case 10: printf("Dez");
					 break;
			case 20: printf("Vinte");
					 break;
			case 30: printf("Trinta");
					 break;
			case 40: printf("Quarenta");
					 break;
			case 50: printf("Cinquenta");
					 break; 
			case 60: printf("Sessenta");
					 break;
			case 70: printf("Setenta");
					 break;
			case 80: printf("Oitenta");
					 break;
			case 90: printf("Noventa");
					 break;
		}
	
	else if (num / 10 == 0 && num % 10 != 0)
	
		switch (num){
			
			case 1: printf("Um");
					 break;
			case 2: printf("Dois");
					 break;
			case 3: printf("Tres");
					 break;
			case 4: printf("Quatro");
					 break;
			case 5: printf("Cinco");
					 break; 
			case 6: printf("Seis");
					 break;
			case 7: printf("Sete");
					 break;
			case 8: printf("Oito");
					 break;
			case 9: printf("Nove");
					 break;
		}
	else if (num / 10 != 0 && num % 10 != 0)
		
		x = num / 10;
		y = num % 10;
		
		switch (x){
			
			case 1: 
				switch (y){
					case 1: printf("Onze");
					 break;
					case 2: printf("Doze");
					 break;
					case 3: printf("Treze");
					 break;
					case 4: printf("Quatorze");
					 break;
					case 5: printf("Quinze");
					 break; 
					case 6: printf("Dezessei");
					 break;
					case 7: printf("Dezessete");
					 break;
					case 8: printf("Dezoito");
					 break;
					case 9: printf("Dezenove");
					 break;
				}
			break;
			
			case 2: printf("Vinte");
				switch (y){
					case 1: printf(" e Um");
					 break;
					case 2: printf(" e Dois");
					 break;
					case 3: printf(" e Tres");
					 break;
					case 4: printf(" e Quatro");
					 break;
					case 5: printf(" e Cinco");
					 break; 
					case 6: printf(" e Seis");
					 break;
					case 7: printf(" e Sete");
					 break;
					case 8: printf(" e Oito");
					 break;
					case 9: printf(" e Nove");
					 break;
			}
			break;
			
			case 3: printf("Trinta");
				switch (y){
					case 1: printf(" e Um");
					 break;
					case 2: printf(" e Dois");
					 break;
					case 3: printf(" e Tres");
					 break;
					case 4: printf(" e Quatro");
					 break;
					case 5: printf(" e Cinco");
					 break; 
					case 6: printf(" e Seis");
					 break;
					case 7: printf(" e Sete");
					 break;
					case 8: printf(" e Oito");
					 break;
					case 9: printf(" e Nove");
					 break;
			}
			break;
		
			case 4: printf("Quarenta");
				switch (y){
					case 1: printf(" e Um");
					 break;
					case 2: printf(" e Dois");
					 break;
					case 3: printf(" e Tres");
					 break;
					case 4: printf(" e Quatro");
					 break;
					case 5: printf(" e Cinco");
					 break; 
					case 6: printf(" e Seis");
					 break;
					case 7: printf(" e Sete");
					 break;
					case 8: printf(" e Oito");
					 break;
					case 9: printf(" e Nove");
					 break;
			}
			break;
			
			case 5: printf("Cinquenta");
				switch (y){
					case 1: printf(" e Um");
					 break;
					case 2: printf(" e Dois");
					 break;
					case 3: printf(" e Tres");
					 break;
					case 4: printf(" e Quatro");
					 break;
					case 5: printf(" e Cinco");
					 break; 
					case 6: printf(" e Seis");
					 break;
					case 7: printf(" e Sete");
					 break;
					case 8: printf(" e Oito");
					 break;
					case 9: printf(" e Nove");
					 break;
			}
			break;
			
			case 6: printf("Sessenta");
				switch (y){
					case 1: printf(" e Um");
					 break;
					case 2: printf(" e Dois");
					 break;
					case 3: printf(" e Tres");
					 break;
					case 4: printf(" e Quatro");
					 break;
					case 5: printf(" e Cinco");
					 break; 
					case 6: printf(" e Seis");
					 break;
					case 7: printf(" e Sete");
					 break;
					case 8: printf(" e Oito");
					 break;
					case 9: printf(" e Nove");
					 break;
			}
			break;
			
			case 7: printf("Setenta");
				switch (y){
					case 1: printf(" e Um");
					 break;
					case 2: printf(" e Dois");
					 break;
					case 3: printf(" e Tres");
					 break;
					case 4: printf(" e Quatro");
					 break;
					case 5: printf(" e Cinco");
					 break; 
					case 6: printf(" e Seis");
					 break;
					case 7: printf(" e Sete");
					 break; 
					case 8: printf(" e Oito");
					 break;
					case 9: printf(" e Nove");
					 break;
			}
			break;
			
			case 8: printf("Oitenta");
				switch (y){
					case 1: printf(" e Um");
					 break;
					case 2: printf(" e Dois");
					 break;
					case 3: printf(" e Tres");
					 break;
					case 4: printf(" e Quatro");
					 break;
					case 5: printf(" e Cinco");
					 break; 
					case 6: printf(" e Seis");
					 break;
					case 7: printf(" e Sete");
					 break;
					case 8: printf(" e Oito");
					 break;
					case 9: printf(" e Nove");
					 break;
			}
			break;
			
			case 9: printf("Noventa");
				switch (y){
					case 1: printf(" e Um");
					 break;
					case 2: printf(" e Dois");
					 break;
					case 3: printf(" e Tres");
					 break;
					case 4: printf(" e Quatro");
					 break;
					case 5: printf(" e Cinco");
					 break; 
					case 6: printf(" e Seis");
					 break;
					case 7: printf(" e Sete");
					 break;
					case 8: printf(" e Oito");
					 break;
					case 9: printf(" e Nove");
					 break;
			}
			break;
	}
}
