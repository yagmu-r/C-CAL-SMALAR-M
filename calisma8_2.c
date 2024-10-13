#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int sayi;
	float sonuc;
	printf("sayiyi girin:");
	scanf("%d",&sayi);
	sonuc=sqrt(sayi);
	printf("sonuc: %.3f",sonuc);
	return 0;
}
