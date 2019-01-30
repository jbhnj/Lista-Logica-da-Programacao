#include <stdio.h>
main(){
	int num, n100, n50, n20, n10, n5, n2, n1;
	scanf("%d", &num);
	n100 = num / 100;
	n50 = (num % 100) / 50;
	n20 = ((num % 100) % 50) / 20;
	n10 = (((num % 100) % 50) % 20) / 10;
	n5 = ((((num % 100) % 50) % 20) % 10) / 5;
	n2 = (((((num % 100) % 50) % 20) % 10) % 5) / 2;
	n1 = ((((((num % 100) % 50) % 20) % 10) % 5) % 2) / 1;
	printf("O numero de notal de 100 eh %d\n", n100);
	printf("O numero de notal de 50 eh %d\n", n50);
	printf("O numero de notal de 20 eh %d\n", n20);
	printf("O numero de notal de 10 eh %d\n", n10);
	printf("O numero de notal de 5 eh %d\n", n5);
	printf("O numero de notal de 2 eh %d\n", n2);
	printf("O numero de notal de 1 eh %d\n", n1);
}
