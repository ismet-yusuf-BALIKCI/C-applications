#include <stdio.h>

void EkranaYaz(){
	printf("Merhaba\n");
}


//KupHesapla fonksiyonu sonucu döndürmez, ekrana yazdýrýr
void KupHesapla(int x){
	int sonuc=x*x*x;
	printf("%d kupu=%d\n",x,sonuc);	
}

//Toplam fonksiyonu kendisine parametre olarak gönderilen 3 sayýnýn 
//toplamýný hesaplayýp sonucu dönderir
int Toplam(int a,int b,int c){
	int sonuc=a+b+c;	
	return sonuc;//sonuc deðerini çaðrýldýðý yere dönderir
}

int main(){//Ana fonksiyon

	EkranaYaz(); //EkranaYaz fonksiyonunu çaðýr
	
	KupHesapla(2); //2 nin küpünü hesaplayýp sonucu yazdýrýr	
	KupHesapla(9); //9'un küpü
	int sayi=5;
	KupHesapla(sayi);//5'in küpünü hesapla
	printf("bir sayi gir:");
	scanf("%d",&sayi);
	KupHesapla(sayi);//girilen sayýnýn küpünü hesapla
	
	int x=Toplam(1,2,3);//1,2,3 sayýlarýný toplayýp dönen sonucu x'e aktar
	int y=Toplam(8,9,10);
	int carpim=x*y; //1,2,3 toplamý ile 8,9,10 toplamlarýný çarp
	printf("Toplamlarin carpimi:%d \n",carpim);
	

}


