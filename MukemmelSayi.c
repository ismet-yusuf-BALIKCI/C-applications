#include <stdio.h>
/*
M�kemmel say�: Kendisi hari� di�er tam b�lenlerinin toplam� kendisine e�it olan say�
*/
int main(){
	
	int sayi,i,toplam=0;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i++){
		if(sayi%i==0){ //tam b�leni bul
			toplam+=i; //tam b�len ise toplama ekle
		}//if sonu
	}//for sonu
	
	if(toplam==sayi){
			printf("Mukemmel sayi\n");
	}
	else{
		printf("Mukemmel sayi degildir\n");
	}
	
}
