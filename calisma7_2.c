#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i,birler,onlar,yuzler,sayac;
	sayac=0;
	for(i=100;i<=999;i++)
	{
		birler=i%10;
		onlar=(i/10)%10;
		yuzler=i/100;
		if(birler!=onlar && onlar!=yuzler && birler != yuzler)
		{
			printf("%d\n",i);
			sayac++;
		}
	}
	printf("%d tanedir",sayac);
	return 0;
}
