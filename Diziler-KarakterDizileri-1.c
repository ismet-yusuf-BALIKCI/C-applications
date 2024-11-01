//Karakter Dizileri - Stringler
main(){
		
	//scanf ve printf kullanarak kelime okuma ve yazdýrma:	
	//NOT: scanf ile tek kelime okunabilir, birden fazla kelime okunamaz
	char kelime[10];
	printf("bir kelime giriniz:");
	scanf("%s",&kelime);	
	printf("girilen kelime:%s \n",kelime);
	
	printf("karakterler yazdiriliyor:\n");
	int i=0;	
	while(kelime[i]!='\0'){ //kelimenin sonuna gelene kadar dön
		printf("%d.karakter: %c \n",i,kelime[i]);
		i++;
	}

	//2 farklý þekilde karakter dizisi oluþturulabilir:
	char isim[20]={'a','l','i'};
	char bolum[15]="yazilim"; //'y','a','z','i','l','i','m','\0'
	
	printf("isim:%s \n",isim);
	printf("bolumu:%s \n",bolum);
	
	
	

	//gets ve puts komutlarýný kullanarak okuma ve yazdýrma:
	//NOT: gets komutu ile birden fazla kelime, cümleler okunabilir.			
	char adSoyad[20];
	printf("ad soyad giriniz:");
	gets(adSoyad);//Okuma	
	printf("girilen isim:");
	puts(adSoyad);//Yazdýrma	
}
