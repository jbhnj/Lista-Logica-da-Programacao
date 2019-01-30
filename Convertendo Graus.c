#include <stdio.h>

main(){
	
	int numg, numm, nums; 
	float graus;
	
	scanf("%d %d %d", &numg, &numm, &nums);
	
	graus = numg + (numm / 60.0) + (nums / 3600.0);
	
	printf("As coordenadas %do %d\' %d\" = %f", numg, numm, nums, graus);
}
