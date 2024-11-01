/*
Girilen sayýnýn asal olup olmadýðýný bulan program
*/

#include <stdio.h>
int main(){
	
	int sayi,i,bolenSayi=0;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=2;i<sayi;i++){		
		if(sayi%i==0){
			bolenSayi++;						
		}		
	}
	if(bolenSayi==0) //Hiç bir sayýya tam bölünemediyse bölen sayýsý 0 olarak kalmýþtýr
		printf("%d Asal sayidir",sayi);
	else
		printf("%d Asal degildir",sayi);	
}
