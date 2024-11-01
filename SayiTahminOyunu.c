int main(){
	
	int sayi = 80;	
	int tahmin=0,sayac=0;
	 
    while(sayi!=tahmin)
    {
        printf("1-100 arasindaki sayiyi tahmin ediniz:");
        scanf("%d", &tahmin);
 
        if (tahmin < sayi)
            printf("Daha buyuk sayi girmelisiniz\n");
 
        if (tahmin > sayi)
            printf("Daha kucuk sayi girmelisiniz\n");
        sayac++;
 
    }
    printf("Tebrikler %d.denemede buldunuz!\n",sayac);
}
