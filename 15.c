#include <stdio.h>
main(){
	float altp, altu, somp, somu;
	scanf("%f %f %f", &altu, &somp, &somu);
	altp = (somp * altu) / somu;
	printf("A altura do predio eh %f", altp);
}
