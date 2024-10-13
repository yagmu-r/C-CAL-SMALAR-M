#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	printf("***alan ve cevre hesaplama***\n");
	float yaricap,pi,alan,cevre;
	pi=3.14;
	printf("yaricap degerini giriniz:");
	scanf("%f",&yaricap);
	alan=pi*yaricap*yaricap;
	cevre=2*pi*yaricap;
	printf("alan:%f\n",alan);
	printf("cevre:%f",cevre);
		return 0;
}


