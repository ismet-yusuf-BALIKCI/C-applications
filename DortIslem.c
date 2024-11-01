int main(){
	int a,b,sonuc,islem;
	do{	
	
		printf("\nislem seciniz:");
		printf("\n1.Toplama \n2.Cikarma \n3.Carpma \n4.Bolme \n0.Cikis\n");
		scanf("%d",&islem);
		
		if(islem==0){
			printf("Cikis yapildi...");
			break;
		}
		
		printf("1.sayi giriniz:");
		scanf("%d",&a);
		printf("2.sayi giriniz:");
		scanf("%d",&b);		
		
		switch(islem){
			case 1: sonuc=a+b;
					printf("Toplama sonucu=%d",sonuc);
					break;
			case 2: sonuc=a-b;
			printf("Cikarma sonuc=%d",sonuc);
					break;		
			case 3: sonuc=a*b;
			printf("Caprma sonuc=%d",sonuc);
					break;
			case 4: sonuc=a/b;
			printf("Bolme sonuc=%d",sonuc);
					break;						
				
			default:
				printf("Hatali secim yaptiniz!");		
		}	
	}while(islem!=0);
	
}
