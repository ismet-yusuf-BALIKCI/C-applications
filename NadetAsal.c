/*
�lk N adet asal say�y� listeleme:
�rne�in N=7 i�in ilk 7 asal say�:
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
	
	sayi=2;//2 den ba�layarak t�m say�lar� kontrol et (N adet asal say� bulana kadar say�y� 1 artt�r�p)
	
	while(sayac<N){ //N adet asal say� bulana kadar d�ng� olu�tur
		//sayi=2 den ba�layarak artt�r ve sayi asal m� kontrol et
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
		sayi++;	//Bir sonraki say�ya ge�				
	}	
		
}
