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
	p=dizi;//dizinin baþlangýç adresini pointera aktar
	//p=&dizi[0]; þeklinde ilk elemanýn adresi de aktarýlabilir.	
	for(i=0;i<3;i++){
		printf("%d  \n",*p);//p adresindeki deðeri yaz
		p++;//p adresini arttýr, bir sonraki adrese geç(bir sonraki indeks)
	}
	
	
}
