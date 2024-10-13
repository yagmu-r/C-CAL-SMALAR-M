#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int dizi[2][2];
	int i,j;
	
	dizi[0][0]=13;
    dizi[0][1]=98;
    dizi[1][0]=65;
    dizi[1][1]=12;
    
    printf("matrisin 0-0 da bulunan elemani:%d\n",dizi[0][0]);
    printf("matrisin 0-1 de bulunan elemani:%d\n",dizi[0][1]);
    printf("matrisin 1-0 da bulunan elemani:%d\n",dizi[1][0]);
    printf("matrisin 1-1 de bulunan elemani:%d\n\n",dizi[1][1]);
    
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("%d",dizi[i][j]);
    		printf("  ");
		}
		printf("\n\n");
	}
	return 0;
}
