#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char sehir[13];
	int i,sayi;
	printf("sayi degerini gir:");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++)
	{
		printf("%d.sehri girin:",i+1);
		scanf("%s",&sehir[i]);
		printf("\n");
	}
	for(i=0;i<sayi;i++)
	{
		printf("girdiginiz sehirler:%s\n",&sehir[i]);
	}
	return 0;
}
