#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() 
{
	int satir,sutun,i,j,k,n;
	printf("satir sayisi:");
	scanf("%d",&satir);
	printf("sutun sayisi girin:");
	scanf("%d",&sutun);
	int matris[satir][sutun];
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("\n[%d][%d]-->",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}
    printf("\n\n olusan matris:\n");
    for(k=0;k<satir;k++)
		{
			for(n=0;n<sutun;n++)
			{
				printf("%d ",matris[k][n]);
	
			}
		printf("\n");
		}
	return 0;
}
