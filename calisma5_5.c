#include <stdio.h>
#include <stdlib.h>

//yildizlarla sekil olusturma

int main() 
{
	int i,j,satirs;
	printf("satir sayisini girin:");
	scanf("%d",&satirs);
	for(i=1;i<=satirs;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("%d",j);
			printf("	");
		}
		printf("\n");
	}
}
