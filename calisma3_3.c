#include<stdio.h>

int main()
{
	printf("**suyun durumu**\n\n");
	float sicaklik;
	printf("sicaklik degeri giriniz:");
	scanf("%f",&sicaklik);
	if (sicaklik<=0)
	{
		printf("buz halde");
	}
	if (sicaklik>0 && sicaklik<100)
	{
		printf("sivi halde");
	}
	if (sicaklik>=100)
	{
		printf("buhar halde");
	}

}   
