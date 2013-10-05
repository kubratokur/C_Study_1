#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<Windows.h>
#include<string.h>

int main()
{

	int girilenSayi, kacSayi;
	char secim = ' ';
	int sayiList[BUFSIZ];
	int toplam = 0;
	int sonuc = 1;
	int carpim = 1;
	int sayi1,sayi2;

	printf("Islem Sec : ");
	secim = getchar();
	printf("Your selection : %c\n",secim);
	getchar();

	switch (secim)
	{
	case '+':
		printf("Kac tane sayi ile islem yapilacak? : ");
		scanf_s("%d",&kacSayi);

		for(int i = 0; i< kacSayi;i++)
		{
			printf("%d. sayiyi girin : ",i+1);
			scanf_s("%d",&sayiList[i]);
			toplam+=sayiList[i];
		}
		printf("Toplam : %d\n",toplam);
		break;
	case '*':
		printf("Kac tane sayi ile islem yapilacak? : ");
		scanf_s("%d",&kacSayi);

		for(int i = 0; i< kacSayi;i++)
		{
			printf("%d. sayiyi girin : ",i+1);
			scanf_s("%d",&sayiList[i]);
			carpim*=sayiList[i];
		}
		printf("Toplam : %d\n",carpim);
		break;
	case '/':
		printf("Birinci sayiyi giriniz : ");
		scanf_s("%d",&sayi1);
		printf("Ikininci sayiyi giriniz : ");
		scanf_s("%d",&sayi2);
		while(sayi2 == 0){
			printf("Please add non-zero number as second...");
			scanf_s("%d",&sayi2);
		}
		sonuc = sayi1 / sayi2;
		printf("Sonuc : %d\n",sonuc);
		break;
	case '-':
		printf("Birinci sayiyi giriniz : ");
		scanf_s("%d",&sayi1);
		printf("İkininci sayiyi giriniz : ");
		scanf_s("%d",&sayi2);
		sonuc = sayi1 - sayi2;
		printf("Sonuc : %d\n",sonuc);
	default:
		break;
	}
	return 0;
}
