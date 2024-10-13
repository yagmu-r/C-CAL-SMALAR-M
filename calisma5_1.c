#include <stdio.h>
#include <stdlib.h>

//girilen sehirleri string kullanarak siralayan kod
int main() 
{
	char* sehirler[]={"ankara","van","istanbul","izmir"};
	
	int i;
	for(i=0;i<4;i++)
	{
		printf("%s\n",sehirler[i]);
	}
	return 0;
}
