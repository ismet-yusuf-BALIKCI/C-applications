//Dizi yerine pointer kullanarak 5 say� okuyup yazd�rma:
int main(){
		
	int *p=(int *)malloc(sizeof(int)*5);// 5 elemanl� pointer dizi tan�mlan�yor
	
	int i;
	for(i=0;i<5;i++){
		printf("%d.sayi:",i+1);				
		scanf("%d",p+i);//girilen say� p pointera aktar�l�yor.p0,p1,p2.. adreslerine 
	}
	
	for(i=0;i<5;i++){
		printf("%d ",*(p+i));//pointer de�erleri yazd�r�l�yor
	}
		
}
