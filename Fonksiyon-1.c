#include <stdio.h>

void EkranaYaz(){
	printf("Merhaba\n");
}


//KupHesapla fonksiyonu sonucu d�nd�rmez, ekrana yazd�r�r
void KupHesapla(int x){
	int sonuc=x*x*x;
	printf("%d kupu=%d\n",x,sonuc);	
}

//Toplam fonksiyonu kendisine parametre olarak g�nderilen 3 say�n�n 
//toplam�n� hesaplay�p sonucu d�nderir
int Toplam(int a,int b,int c){
	int sonuc=a+b+c;	
	return sonuc;//sonuc de�erini �a�r�ld��� yere d�nderir
}

int main(){//Ana fonksiyon

	EkranaYaz(); //EkranaYaz fonksiyonunu �a��r
	
	KupHesapla(2); //2 nin k�p�n� hesaplay�p sonucu yazd�r�r	
	KupHesapla(9); //9'un k�p�
	int sayi=5;
	KupHesapla(sayi);//5'in k�p�n� hesapla
	printf("bir sayi gir:");
	scanf("%d",&sayi);
	KupHesapla(sayi);//girilen say�n�n k�p�n� hesapla
	
	int x=Toplam(1,2,3);//1,2,3 say�lar�n� toplay�p d�nen sonucu x'e aktar
	int y=Toplam(8,9,10);
	int carpim=x*y; //1,2,3 toplam� ile 8,9,10 toplamlar�n� �arp
	printf("Toplamlarin carpimi:%d \n",carpim);
	

}


