#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	printf("bir sayi giriniz:");
	scanf("%d",&x);
	if (x%5==0)
	{
		printf("sayi 5'e tam bolunur");
	}
	else
	{
		printf("sayi 5'e tam bolunmez");
	}
}
	
