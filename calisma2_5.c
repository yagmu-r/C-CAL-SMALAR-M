#include <stdio.h>
#include <stdlib.h>

//ygs 1 puan türü hesaplama
//türkce:1.999
//mat:3.998
//sosyal:1
//fen:2.999
//taban:100.160

int main()
{
	float turkce,mat,fen,sosyal,toplampuan,taban;
	printf("turkce netinizi giriniz:");
	scanf("%f",&turkce);
	printf("matematik netinizi giriniz:");
	scanf("%f",&mat);
	printf("fen netinizi girniz:");
	scanf("%f",&fen);
	printf("sosyal bilgiler netinizi giriniz:");
	scanf("%f",&sosyal);
	taban=100.160;
	toplampuan=turkce*1.999+mat*3.998+sosyal*1+fen*2.999+taban;
	printf("ygs-1 puan turunde sonucunuz:%f",toplampuan);
		return 0;
}
