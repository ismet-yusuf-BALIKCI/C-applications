main(){
		
	//5 elemanl� dizi olu�turup girilen say�lar� diziye aktarma ve diziyi yazd�rma:
	int dizi[5];
	int toplam=0;
	int i;
	for(i=0;i<5;i++){
		printf("%d.sayi giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	//Dizi elemanlar�n� tek tek yazd�rma:
	printf("\nDizideki elemanlar:");
	printf("%d ",dizi[0]);
	printf("%d ",dizi[1]);
	printf("%d ",dizi[2]);
	printf("%d ",dizi[3]);
	printf("%d ",dizi[4]);
	
	//d�ng� kullanarak dizi elemanlar�n� yazd�rma:
	printf("\nDizideki elemanlar(dongu ile):");
	for(i=0;i<5;i++){
		printf("%d ",dizi[i]);
	}		
}
