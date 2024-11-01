#include <stdio.h>
/*
Mükemmel sayý: Kendisi hariç diðer tam bölenlerinin toplamý kendisine eþit olan sayý
*/
int main(){
	
	int sayi,i,toplam=0;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i++){
		if(sayi%i==0){ //tam böleni bul
			toplam+=i; //tam bölen ise toplama ekle
		}//if sonu
	}//for sonu
	
	if(toplam==sayi){
			printf("Mukemmel sayi\n");
	}
	else{
		printf("Mukemmel sayi degildir\n");
	}
	
}
