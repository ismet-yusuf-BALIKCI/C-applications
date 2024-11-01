struct Kitap{
	char isim[50];
	char yazar[30];
	int sayfa;
};

void yaz(struct Kitap k){
	printf("kitap adi=%s yazar=%s sayfa=%d \n",k.isim,k.yazar,k.sayfa);
}

void yazPointer(struct Kitap *k){
	printf("kitap adi=%s yazar=%s sayfa=%d \n",k->isim,k->yazar,k->sayfa);
}

main(){
	//struct Kitap türünde deðiþken tanýmla
	//struct Kitap kitap;
	//printf("kitap ismi:");
	//gets(kitap.isim);
	//printf("yazar:");
	//gets(kitap.yazar);
	//printf("sayfa:");
	//scanf("%d",&kitap.sayfa);	
	//yaz(kitap);
	
	//struct Kitap Pointer olarak tanýmla:
	struct Kitap *ktp=(struct Kitap*)malloc(sizeof(struct Kitap));
	printf("kitap ismi:");
	gets(ktp->isim);
	printf("yazar:");
	gets(ktp->yazar);
	printf("sayfa:");
	scanf("%d",&ktp->sayfa);	
	yazPointer(ktp);	
	
}
