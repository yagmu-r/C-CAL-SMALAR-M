#include <stdio.h>
#include <stdlib.h>

//haftanin gunlri switch case seklinde kodlama
int main() 
{
	char sayi ;
	printf("bir sayi degeri giriniz:");
	scanf("%c",&sayi);
	switch(sayi)
	{
		case'1':printf("pazartesi");break;
		case'2':printf("sali");break;
		case'3':printf("carsamba");break;
		case'4':printf("persembe");break;
		case'5':printf("cuma");break;
		case'6':printf("cumartesi");break;
		case'7':printf("pazar");break;
		default:printf("hatali giris");break;
	}
	return 0;
}
