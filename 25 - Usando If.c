#include <stdio.h>
main(){
	int num;
	scanf("%d", &num);
	if (num == 2)
		printf("O mes possuira 28 dias em anos normais e 29 dias em anos bissextos");
	else if ((num == 1) || (num == 3) || (num == 5) || (num == 7) || (num == 8) || (num == 10) || (num == 12))
		printf("O mes possui 31 dias");
	else
		printf("O mes possui 30 dias");
}
