//Diziyi pointera aktarma:
int main(){
	int dizi[]={1,2,3};
	int i;
	printf("Dizi elemanlari:\n");
	for(i=0;i<3;i++){
		printf("%d \n",dizi[i]);
	}
	printf("Pointer elemanlari:\n");
	int *p;
	p=dizi;//dizinin ba�lang�� adresini pointera aktar
	//p=&dizi[0]; �eklinde ilk eleman�n adresi de aktar�labilir.	
	for(i=0;i<3;i++){
		printf("%d  \n",*p);//p adresindeki de�eri yaz
		p++;//p adresini artt�r, bir sonraki adrese ge�(bir sonraki indeks)
	}
	
	
}
