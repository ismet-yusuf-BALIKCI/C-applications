
int fact(int n){
	if(n<=1){
		return 1;
	}		
	return n*fact(n-1);	
}

int main(){
	int sayi=5;
	//fact fonksiyonu 2 �ekilde �a�r�l�p sonu� yazd�r�labilir:
	//1: sonuc de�i�kenine atay�p yazd�rma
	int sonuc=fact(sayi);
	printf("%d!=%d \n",sayi,sonuc);
	//2: fonksiyonu printf i�inde �a��r�p d�nen de�eri direk yazd�rma:
	printf("%d!=%d \n",sayi,fact(sayi));
}
