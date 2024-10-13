#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int sayi,birb,onb,yuzb,toplam;
	printf("3 basamakli bir sayi girin:");
	scanf("%d",&sayi);
	if(sayi>=100&&sayi<=999)
	{
		birb=sayi%10;
		onb=(sayi/10)%10;
		yuzb=sayi/100;
		toplam=birb+onb+yuzb;
		printf("basamak toplami:%d",toplam);
	}
	else
	{
		printf("hatali giris tekrar deneyiniz");
	}
	return 0;
}
