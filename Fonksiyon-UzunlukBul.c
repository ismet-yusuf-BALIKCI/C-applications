//Girilen 2 metnin uzunluklar�n� kar��la�t�r�n�z:

//kelimenin uzunlu�unu bulan fonksiyon:
int uzunluk(char metin[]){
	int i=0;
	while(metin[i]!='\0'){
		i++;
	}
	return i;
}

int main(){
	
	char kelime[100],kelime2[50];
	printf("1.kelimeyi giriniz:");
	gets(kelime);
	printf("2.kelimeyi giriniz:");
	gets(kelime2);
	
	//1.y�ntem(uzunluklar� ayr� ayr� bulup de�i�kenlere atad�ktan sonra kar��la�t�r):
//	int uz1,uz2;
//	uz1=uzunluk(kelime);//1.kelimenin uzunlu�unu bul
//	uz2=uzunluk(kelime2);//2.kelimenin uzunlu�unu bul
//	if(uz1==uz2){
//		printf("uzunluklar esit");
//	}
//	else{
//		printf("uzunluklar farkli");
//	}
	
	//2.y�ntem(fonksiyonu if i�inde �a��rarak kar��la�t�r):
	if(uzunluk(kelime)==uzunluk(kelime2)){
		printf("uzunluklar esit");
	}
	else{
		printf("uzunluklar farkli");
	}
	
}


