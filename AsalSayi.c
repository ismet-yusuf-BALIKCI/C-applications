/*
Girilen say�n�n asal olup olmad���n� bulan program
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
	if(bolenSayi==0) //Hi� bir say�ya tam b�l�nemediyse b�len say�s� 0 olarak kalm��t�r
		printf("%d Asal sayidir",sayi);
	else
		printf("%d Asal degildir",sayi);	
}
