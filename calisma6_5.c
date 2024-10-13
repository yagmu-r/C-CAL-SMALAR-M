#include <stdio.h>
#include <stdlib.h>
// iyi incele

int main() 
{
	int i,j,giris;
	printf("kodun satir sayisini belirle:");
	scanf("%d",&giris);
	for(i=1;i<=giris;i++);
	{
		for(j=1;j<=giris-i;j++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i*2-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		for(i=1;i<=giris;i++)
		{
			for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=(giris*2-2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");

		}
	return 0;
}
