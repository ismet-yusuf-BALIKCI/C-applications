/*
YAPILAR (STRUCT)
*/

struct Ogrenci{
	char ad[50];
	int no;
	int sinif;
};
void yazdir(struct Ogrenci x){
	printf("ad:%s no:%d sinif:%d \n",x.ad,x.no,x.sinif);
}
main(){

	struct Ogrenci ogr[3];//struct Ogrenci tipinde ogr isimli 3 elemanlý dizi tanýmlanmasý
	int i;
	for(i=0;i<3;i++){
		printf("%d.ogrencinin ad,no,sinif giriniz:",i+1);
		scanf("%s %d %d",&ogr[i].ad,&ogr[i].no,&ogr[i].sinif);//Dizinin her bir elemanýndaki ad,no,sinif alanlarýna deðer atamasý
	}
	
	for(i=0;i<3;i++){
		yazdir(ogr[i]);//dizinin her bir elemaný yazdýr fonksiyonuna gönderiliyor (Her elemanýn tipi struct Ogrenci)
	}	
	
}
