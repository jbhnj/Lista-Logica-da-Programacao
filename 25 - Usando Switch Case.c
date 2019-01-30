#include <stdio.h>
main(){
	int num;
	scanf("%d", &num);
	switch(num){
		case 2: printf("28 dias em anos normais e 29 dias se for ano bissexto");
				break;
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: printf("O mes tem 31 dias");
				 break;
		
		case 4:
		case 6:
		case 9:
		case 11: printf("O mes tem 30 dias");
				 break;
	}
}
