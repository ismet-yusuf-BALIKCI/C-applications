int main(){
	//Dizi boyutunun(eleman say�s�n�n) kullan�c� taraf�ndan belirlenerek olu�turulmas�:
	int boyut;	
	printf("Dizi eleman sayisini giriniz:");
	scanf("%d",&boyut);
	
	int dizi[boyut];
	
	int i;
	for(i=0;i<boyut;i++){
		printf("%d.sayi gir:",i+1);
		scanf("%d",&dizi[i]);		
	}
	
	//dizinin t�m elemanlar�n� listele:
	for(i=0;i<boyut;i++){
		printf("\ndizinin %d.elemani=%d",i+1,dizi[i]);
	}	
	
	
	//dizideki say�lar�n ortalamas�n� hesapla:
	float toplam=0,ort;
	for(i=0;i<boyut;i++){
		toplam=toplam+dizi[i];
	}
	
	ort=toplam/boyut;
	printf("\n\ndizi ortalamasi=%f",ort);
	
}
