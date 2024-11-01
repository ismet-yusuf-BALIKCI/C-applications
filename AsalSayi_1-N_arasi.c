
/*
1-N arasý tüm sayýlarýn asal olup olmadýðýný bulan program
N=20
2 asal
3 asal
4 asal degil
5 asal
6 asal degil
..
20 asal
*/
#include <stdio.h>
int main(){
	
	int i,bolenSayi=0,N;
	printf("N degerini giriniz:");
	scanf("%d",&N);
	int sayi;
	for(sayi=2;sayi<=N;sayi++){ //2'den N'e kadar tüm sayýlara bak
		//sýradaki sayi asal mý diye kontrol et:
		bolenSayi=0;
		for(i=2;i<sayi;i++){				
			if(sayi%i==0){
				bolenSayi++;		
			}		
		}
		if(bolenSayi==0)
			printf("%d Asal\n",sayi);
		else
			printf("%d Asal degil\n",sayi);		
	}
		
}
