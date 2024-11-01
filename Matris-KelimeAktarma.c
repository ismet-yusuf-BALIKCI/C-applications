int main(){
	
	char matris[5][20]={};//5 satýr 20 sütunluk boþ matris oluþtur
 	int i=0,j=0;
 	char cumle[100];
 	printf("cumle giriniz:");
 	gets(cumle);
 	int k=0;
 	while(cumle[k]!='\0'){//girilen cümlenin sonuna kadar her harfi kontrol et
 		if(cumle[k]==' '){//Boþluk ise bir alt satýrýn ilk sütununa geç(i:satýr, j:sütun)
 			i++;
 			j=0;
		}
		else{
			matris[i][j]=cumle[k]; //boþluk deðilse harfi matrise aktar
 			j++;	//her harf aktarýlýnca bir sonraki sütuna geç
		} 		
 		k++;
 	}
 	printf("Matris:\n");
 	for(i=0;i<5;i++){
 		for(j=0;j<20;j++){
 		
 			printf("%c ",matris[i][j]);
	 	}
	 	printf("\n");
 	}	
	
}
