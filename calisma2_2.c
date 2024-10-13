#include <stdio.h>
#include <stdlib.h>


int main()
{
	int x;
	printf("sayi giriniz:");
	scanf("%d",&x);
	if (x%5==0||x%3==0)
	{
		printf("sayi 3 veya 5 e tam bolunur");
	}
	else
	{
		printf("sayi 3 veya 5 e tam bolunmez");
	}
	return 0;
}
