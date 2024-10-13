#include <stdio.h>
#include <stdlib.h>

//1+5+9+13+17+...+41 toplam degeri bulma

int main() 
{
	int i,sayac;
	sayac=0;
	for(i=1;i<=41;i+=4)
	{
		sayac=sayac+i;
	}
	printf("serinin eleman toplami: %d",sayac);
	

}
