#include <stdio.h>
#include <stdlib.h>


int main()
{
	int sayi1,sayi2,sonuc;
	char islem;
	sayi1=75;
	sayi2=15;
	printf("islemi girin:");
	scanf("%c",&islem);
	switch(islem)
	{
		case'+':sonuc=sayi1+sayi2;printf("sonuc:%d",sonuc);break;
		case'-':sonuc=sayi1-sayi2;printf("sonuc:%d",sonuc);break;
		case'*':sonuc=sayi1*sayi2;printf("sonuc:%d",sonuc);break;
		case'/':sonuc=sayi1/sayi2;printf("sonuc:%d",sonuc);break;
		default:printf("hatali giris");break;
	}
	
	return 0;
}
