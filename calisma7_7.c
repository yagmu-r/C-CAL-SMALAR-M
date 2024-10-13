#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int skor[10]={1,1,0,0,1,1,1,2,1,0};
    int i,puan;
    puan=0;
    for(i=0;i<10;i++)
    {
    	if(skor[i]==0)
    	{
    		puan=puan+1;
		}
		else if(skor[i]==2)
		{
			puan=puan+3;
		}
	}
    if(puan>=12)
    {
    	printf("puaniniz:%d ligde kaldiniz",puan);
	}
	else if(puan<12)
	{
		printf("puaniniz:%d ligden dustunuz",puan);
	}
    
	return 0;
}
