//2 lik tabandan onluk tabana çevirme:
#include <stdio.h>
int main(){
	/*
	1.Sayi al
	2.Basamak sayisini bul
	3.Basamak sayısı kadar döngü oluştur
		3.1. Us hesapla
		3.2. Sonuc+=usluSayi
	*/
	int sayi=101;
	int sonuc=0;
	int basamak;
	int i,j,sayac=0;
	while(sayi>0){
		//1-basamak bul
		basamak=sayi%10;		
		sayi=sayi/10;
		//2-Üs hesapla:
		int usluSayi=1;		
		for(j=0;j<sayac;j++){
			usluSayi=usluSayi*2;
		}	
		printf("usluSayi=%d\n",usluSayi);	
		//Toplama ekle
		sonuc+=basamak*usluSayi;
		sayac++;
	}
	printf("%d",sonuc);
	
}	

