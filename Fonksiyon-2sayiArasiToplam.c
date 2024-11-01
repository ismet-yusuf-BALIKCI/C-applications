#include <stdio.h>

int toplamHesapla(int x,int y){
	int i,toplam=0;
	
	//Not:Küçük sayý-büyük sayý kontrolü de eklenmelidir.
	
	for(i=x+1;i<y;i++){
		toplam+=i;
	}
	return toplam;
}

int main(){
	int sayi1,sayi2;
	printf("1.sayi giriniz:");
	scanf("%d",&sayi1);
	printf("2.sayi giriniz:");
	scanf("%d",&sayi2);
	int sonuc=toplamHesapla(sayi1,sayi2);
	printf("Sonuc:%d",sonuc);
}
