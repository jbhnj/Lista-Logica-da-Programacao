#include <stdio.h>
main(){
	int num, res1, res2, res3, res4, res5, quo;
	scanf("%d", &num);
	res1 = num % 2;
	quo = num / 2;
	res2 = quo % 2;
	quo = quo / 2;
	res3 = quo % 2;
	quo = quo / 2;
	res4 = quo % 2;
	quo = quo / 2;
	res5 = quo % 2;
	printf("O numero convertido em binario eh %d", (res5*10000) + (res4*1000) + (res3*100) + (res2*10) + res1);
	
}
