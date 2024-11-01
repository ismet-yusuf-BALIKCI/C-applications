int main(){
	
	int i,sayi,sonuc=1;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	for(i=sayi;i>=1;i--){
		sonuc=sonuc*i;
	}
	printf("%d!=%d",sayi,sonuc);
	
}
