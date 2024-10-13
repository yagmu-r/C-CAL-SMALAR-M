#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i,s1,s2,toplam=0,buyuk,kucuk;
	yeniden:
	printf("1. sayiyi girin:");
	scanf("%d",&s1);
	printf("2. sayiyi girin:");
	scanf("%d",&s2);
	
	if(s1==s2)
	{
		goto yeniden;
	}
	else
	{
	    	if(s1>s2)
	    	{
	    		buyuk=s1;
	    		kucuk=s2;
			}
			else
			{
				buyuk=s2;
				kucuk=s1;
			}
	}
	for(i=kucuk;i<=buyuk;i++)
	{
		toplam+=i;
	}
	printf("toplam:%d",toplam);
}
