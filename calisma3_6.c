#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int faktor,i;
	faktor=1;
	for(i=1;i<=7;i++)
	{
		faktor=faktor*i;
	}
	printf("faktor sonucu:%d",faktor);
	return 0;
}
