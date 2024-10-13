#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int sayi,toplam=0;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	while(sayi!=0)
	{
		toplam=toplam+sayi;
		printf("sayi giriniz:"); 
		scanf("%d",&sayi);
		
	}
	printf("toplam:%d",toplam);
	return 0;
}
