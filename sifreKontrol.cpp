#include<stdio.h>
#include<stdlib.h>

void main()
{
	char a = ' ';
	char b[6] = {'d','e','n','e','m','e'};
	printf("%c%c%c%c%c%c",b[0],b[1],b[2],b[3],b[4],b[5]);
	printf("\n");
	int sifre = 1234;
	int sifreGirilen=0;
	printf("%d",sifre);
	printf("Sifre giriniz : ");
	scanf("%d",&sifreGirilen);
	printf("Girilen deger : %d\n",sifre);
	if(sifre == sifreGirilen)
	{	
		printf("Sifre Dogru...\n");
	}
	else 
		printf("Hatali giris yaptiniz. Bye...");

	//return 8;
}
