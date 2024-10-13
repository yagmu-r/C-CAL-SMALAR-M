#include <stdio.h>
#include <stdlib.h>

/*if( hava== yagmur)
{
semsiyeni al
}
else
{
semsiyeni alma
}*/

int main() 
{
	int sayi1,sayi2,toplam;
	sayi1=24;
	sayi2=28;
	toplam=sayi1+sayi2;
	if (toplam>=50)
	{
		printf("toplam degeriniz:%d-50 den buyuk",toplam);
	}
	else 
	{
		printf("toplam degeriniz:%d-50 den kucuk",toplam);
	}
 
	return 0;
}
