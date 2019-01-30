#include <stdio.h>

main(){
	
	int num, n1, n2, n3, n4;
	
	scanf("%d", &num);
	
	n1 = num / 1000;
	n2 = (num % 1000) / 100;
	n3 = ((num % 1000) % 100) / 10;
	n4 = ((num % 1000) % 100) % 10;
	
	printf("%d", n4*1000 + n3*100 + n2*10 + n1);
}
