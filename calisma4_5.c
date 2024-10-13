#include <stdio.h>
#include <stdlib.h>

//switch case yapisinin kullanimi
int main() 
{
	char ders;
	printf("ders kodu:");
	scanf("%c",&ders);
	switch(ders)
	{
		case 'f':printf("fen");break;
		case 'm':printf("matematik");break;
		case 's':printf("sosyal");break;
		case 't':printf("turkce");break;
		default:printf("hatali ya da buyuk harf girisi yaptiniz");
		break;
	}
	
	return 0;
}
