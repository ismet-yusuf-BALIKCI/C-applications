main(){
	//dizi elemanlar�n�n kod i�inde girilmesi
	int ogrenciler[3];
	ogrenciler[0]=220;
	ogrenciler[1]=225;
	ogrenciler[2]=226;
	
	//tek tek yazd�rma:
	printf("ogrenci numaralari yazdir:\n");
	printf("1.ogrenci:%d\n",ogrenciler[0]);
	printf("2.ogrenci:%d\n",ogrenciler[1]);
	printf("3.ogrenci:%d\n",ogrenciler[2]);
	
	//d�ng� kullanarak yazd�rma:
	printf("dongu ile yazdir:\n");
	int i;
	for(i=0;i<3;i++){
		printf("%d.ogrenci:%d\n",i+1,ogrenciler[i]);
	}
	
}
