#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,toplam,sayi;
	toplam=0;
	for(i=1;i<=4;i++)
	{
		printf("%d.sayiyi giriniz:",i);
		scanf("%d",&sayi);
		toplam=toplam+sayi;
		
	}
	printf("toplama isleminin sonucu:%d",toplam);
	return 0;
}
