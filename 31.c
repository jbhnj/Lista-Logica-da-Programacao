#include <stdio.h>
main(){
	
	float npast, npasc, njarp, npastou, npasint;
	float qbrating, A, B, C, D;
	
	scanf("%f %f %f %f %f", &npast, &npasc, &njarp, &npastou, &npasint);
	
	A = ((npasc / npast) - 0.3) / 0.2;
	
	B = ((njarp / npast) - 3) / 4;
	
	C = (npastou / npast) / 0.05;
	
	D = ((npasint / npast) - 0.095) / 0.04;
	
	if (A > 2.375)
		A = 2.375;
	else if (A < 0)
		A = 0;
	else
		A = A;
	
	if (B > 2.375)
		B = 2.375;
	else if (B < 0)
		B = 0;
	else
		B = B;
		
	if (C > 2.375)
		C = 2.375;
	else if (C < 0)
		C = 0;
	else
		C = C;
		
	if (D > 2.375)
		D = 2.375;
	else if (D < 0)
		D = 0;
	else
		D = D;
		
	qbrating = ((A + B + C + D) * 100) / 6;
	
	printf("%.3f\n", A);
	printf("%.3f\n", B);
	printf("%.3f\n", C);
	printf("%.3f\n", D);
	
	printf("%.3f", qbrating);
}
