//PO�NTER: G�STER�C�
//Hexadecimal:0-9 A B C D E F
int main(){
	int sayi;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);//	
	printf("girilen sayinin adresi:%p\n",&sayi);
	
	int *p;//p pointer tan�mla
	p=&sayi;//sayi adresi p'ye aktar
	
	printf("p degeri:%p\n",p);//sayi adresi
	printf("p adresindeki deger:%d ",*p);//sayi de�eri
	
	
	//Pointer ile de�i�ken kullanmadan direk bellekten yer ay�r�p de�er atama:
	int *x=(int*)malloc(sizeof(int));//Bellekten yer ay�rma
	
	printf("x adresi:%p \n",x);	
	*x=5;
	printf("x degeri:%d \n",*x);
	
}
