#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	printf("ogrenci ortalama hesap sistemi...\n\n");
	float s1,s2,ort;
	printf("birinci sinavi giriniz:");
	scanf("%f",&s1);
	printf("ikinci sinavi giriniz:");
	scanf("%f",&s2);
	ort=(s1+s2)/2;
	if (ort>=50)
	{
	 printf("sinavi %f ile gectiniz tebrikler :)",ort);
	}
	else
	{
		printf("uzgunuz sinavdan %f ile kaldiniz :( ",ort);
	}
	return 0;
}
