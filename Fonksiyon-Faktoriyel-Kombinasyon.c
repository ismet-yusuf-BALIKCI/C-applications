int factoriyel(int x){
	int i,sonuc=1;
	for(i=x;i>0;i--){
		sonuc=sonuc*i;
	}
	return sonuc;
}

int kombinasyon(int n, int r){
	int sonuc=factoriyel(n) / ( factoriyel(n-r) * factoriyel(r) );//factoriyel fonksiyonu farkl� de�erler ile 3 defa �a�r�l�yor
	return sonuc;
}

int main(){
	
	//4 �n fakt�riyelini bul:
	int faktSonuc=factoriyel(4);
	printf("faktoriyel:%d \n",faktSonuc);
	
	//kombinasyon = n! / (n-r)!.r!
	int n=5,r=2; 	
	int sonuc= kombinasyon(n,r);
	printf("%d'nin %d kombinasyonu: %d \n",n,r,sonuc);
	
	
}
