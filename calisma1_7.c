#include <stdio.h>
#include <stdlib.h>



int main()
{
	int alan,cevre,kenar;
	printf("***karenin alan ve cevre hesabi***\n\n");
	printf("bir kenar uzunlugu giriniz:");
	scanf("%d",&kenar);
	alan=kenar*kenar;
	cevre=kenar*4;
	printf("karenin alani:%d\n",alan);
	printf("karenin cevresi:%d",cevre);
	
	
	return 0;
}
