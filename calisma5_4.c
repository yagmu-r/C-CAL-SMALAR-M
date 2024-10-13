#include <stdio.h>
#include <stdlib.h>

//girilen sayilarin aritmetik ortalamasi dizi ile bulma

int main() 
{
    int dizi[100];
	int i,sayi,toplam=0;
    printf("dizinin eleman sayisini belirleyiniz:");
    scanf("%d",&sayi);
    for(i=0;i<sayi;i++)
    {
    	printf("%d. elemani giriniz:",i+1);
    	scanf("%d",&dizi[i]);
    	printf("\n");
    	toplam=dizi[i]+toplam;
	}
	printf("girilen sayilarin aritmetik ortalamasi:%d",(toplam/sayi));
	
	return 0;
}
