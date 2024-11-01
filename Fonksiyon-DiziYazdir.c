
void diziYazdir(int dizi[],int es){
	int i;
	for(i=0;i<es;i++){
		printf("%d ",dizi[i]);
	}	
}

int main(){	
	int dizi[7]={4,2,1};
	int notlar[2]={90,55};
	
	diziYazdir(dizi,3);		
	printf("\n");
	diziYazdir(notlar,2);//diziYazdir isimli fonksiyona parametre olarak notlar isimli dizi ve eleman sayýsý gönderiliyor
}




