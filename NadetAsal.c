/*
Ýlk N adet asal sayýyý listeleme:
örneðin N=7 için ilk 7 asal sayý:
2
3
5
7
11
13
17
*/
#include <stdio.h>
int main(){
	
	int sayi,i,bolenSayi=0,N,sayac=0;
	printf("Kac adet asal sayi listelensin?:");	
	scanf("%d",&N);
	
	sayi=2;//2 den baþlayarak tüm sayýlarý kontrol et (N adet asal sayý bulana kadar sayýyý 1 arttýrýp)
	
	while(sayac<N){ //N adet asal sayý bulana kadar döngü oluþtur
		//sayi=2 den baþlayarak arttýr ve sayi asal mý kontrol et
		bolenSayi=0;
		for(i=2;i<sayi;i++){		
			if(sayi%i==0){
				bolenSayi++;
				break;			
			}		
		}
		if(bolenSayi==0){
			printf("%d\n",sayi);
			sayac++;
		}
		sayi++;	//Bir sonraki sayýya geç				
	}	
		
}
