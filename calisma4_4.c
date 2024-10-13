#include <stdio.h>
#include <stdlib.h>

//1 ile 20 arasindaki 14 haric cift sayilari sirala

int main() 
{
	int i=2;
	while (i<=20)
	{
		printf("%d\n",i);
		i+=2;                                                                                                                                    
		if(i==14)
		{
			i=i+2;
		}
	}
	
	
	
	return 0;
}
