#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int sayac,i;
	sayac=0;
	for(i=1;i<=20;i++)
	{
		sayac=sayac+i;
	}
	printf("cevap: %d",sayac);
	return 0;
}
