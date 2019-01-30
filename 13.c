#include <stdio.h>
main(){
	float r1, r2, r3, re;
	scanf("%f%f%f", &r1, &r2, &r3);
	re = ((r1 * r2) / (r1 + r2)) + r3;
	printf("A resistencia equivalente eh %f", re);
}
