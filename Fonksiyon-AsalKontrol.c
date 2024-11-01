int asalKontrol(int x){	
	int sayac=0;
	int i;
	for(i=2;i<x;i++){
		if(x%i==0)
			sayac++;
	}
	
	if(sayac==0)
		return 1;//doðru-true 
	else 
		return 0;//yanlýþ-false
}

main(){		
	int sayi;
	printf("sayi gir:");
	scanf("%d",&sayi);
	int asalSonuc=asalKontrol(sayi);//asal fonksiyonu çaðrýlýyor
	
	if(asalSonuc==1)
		printf("%d asal",sayi);
	else 
		printf("%d asal degil",sayi);	
	
}
