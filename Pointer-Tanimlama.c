//POÝNTER: GÖSTERÝCÝ
//Hexadecimal:0-9 A B C D E F
int main(){
	int sayi;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);//	
	printf("girilen sayinin adresi:%p\n",&sayi);
	
	int *p;//p pointer tanýmla
	p=&sayi;//sayi adresi p'ye aktar
	
	printf("p degeri:%p\n",p);//sayi adresi
	printf("p adresindeki deger:%d ",*p);//sayi deðeri
	
	
	//Pointer ile deðiþken kullanmadan direk bellekten yer ayýrýp deðer atama:
	int *x=(int*)malloc(sizeof(int));//Bellekten yer ayýrma
	
	printf("x adresi:%p \n",x);	
	*x=5;
	printf("x degeri:%d \n",*x);
	
}
