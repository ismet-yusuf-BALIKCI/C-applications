int main(){
	//Dizi boyutunun(eleman sayısının) kullanıcı tarafından belirlenerek oluşturulması:
	int boyut;	
	printf("Dizi eleman sayisini giriniz:");
	scanf("%d",&boyut);
	
	int dizi[boyut];
	
	int i;
	for(i=0;i<boyut;i++){
		printf("%d.sayi gir:",i+1);
		scanf("%d",&dizi[i]);		
	}
	
	//dizinin tüm elemanlarını listele:
	for(i=0;i<boyut;i++){
		printf("\ndizinin %d.elemani=%d",i+1,dizi[i]);
	}	
	
	
	//dizideki sayıların ortalamasını hesapla:
	float toplam=0,ort;
	for(i=0;i<boyut;i++){
		toplam=toplam+dizi[i];
	}
	
	ort=toplam/boyut;
	printf("\n\ndizi ortalamasi=%f",ort);
	
}
