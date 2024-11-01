
int fact(int n){
	if(n<=1){
		return 1;
	}		
	return n*fact(n-1);	
}

int main(){
	int sayi=5;
	//fact fonksiyonu 2 şekilde çağrılıp sonuç yazdırılabilir:
	//1: sonuc değişkenine atayıp yazdırma
	int sonuc=fact(sayi);
	printf("%d!=%d \n",sayi,sonuc);
	//2: fonksiyonu printf içinde çağırıp dönen değeri direk yazdırma:
	printf("%d!=%d \n",sayi,fact(sayi));
}
