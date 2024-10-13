#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int faktor,i,a;
	faktor=1;
	printf("bir sayi giriniz:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		faktor=faktor*i;
	}
	printf("%d sayisinin faktoru: %d",a,faktor);
	return 0;
}
