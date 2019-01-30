#include <stdio.h>

main(){
	
	int numesc, numsor;
	float valorapos;
	scanf("%f %d %d", &valorapos, &numesc, &numsor);
	
	if (numesc % 10000 == numsor % 10000)
		printf("%f", valorapos * 3000);
		
	else if (numesc % 1000 == numsor % 1000)
		printf("%f", valorapos * 500);
		
	else if (numesc % 100 == numsor % 100)
		printf("%f", valorapos * 50);
		
	//else if ((numesc % 10) && (numsor % 10) == 0)
		printf("%f", valorapos * 16);
	else if ((numesc % 10) == (numsor % 10))
		begin
			if (((numesc % 10) %10) && ((numsor % 10) %10) == 0
				printf("%f", valorapos * 16);
			else
				
				
	else
		printf("0");
}
