#include <stdio.h>
#include <stdlib.h>


int main()
{
	int elkg,normkg,ucret1,ucret2,topucret;
	printf("el kg girin:");
	scanf("%d",&elkg);
	printf("normal kg girin:");
	scanf("%d",&normkg);
	if(elkg<8)
	{
		ucret1=0;
	}
	else
	{
		ucret1=(elkg-8)*4;
	}
	if(normkg<15)
	{
		ucret2=0;
	}
	else
	{
		ucret2=(normkg-15)*5;
	}
	topucret=ucret1+ucret2;
	printf("odeyeceginiz toplam ucret:%d",topucret);
	return 0;
}
