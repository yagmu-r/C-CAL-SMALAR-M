#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int saat;
	printf("otoparkta kac saat kaldiniz:");
	scanf("%d",&saat);
	if(saat>0&&saat<=4)
	{
		printf("odeyeceginiz ucret:10 TL");
	}
	if (saat>=5&&saat<=8)
	{
		printf("odeyeceginiz ucret:12 TL");
	}
	if (saat>=9&&saat<=12)
	{
		printf("odeyeceginiz ucret:15 TL");
	}
	if(saat>=13)
	{
	   printf("odeyeceginiz ucret:20 TL");	
	}
	
	
	return 0;
}
