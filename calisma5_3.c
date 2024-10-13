#include <stdio.h>
#include <stdlib.h>
//dizi kullanmazsan sondaki sayiyi yazar dizi sayesinde belirlenen elemani yazar.

int main() 
{
	int dizi[100];
	int i,sayi;
    printf("dizinin eleman sayisini belirleyiniz:");
    scanf("%d",&sayi);
    for(i=0;i<sayi;i++)
    {
    	printf("%d. elemani giriniz:",i+1);
    	scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	for(i=0;i<sayi;i++)
	{
		printf("%d ",dizi[i]);
	}
	return 0;
}
