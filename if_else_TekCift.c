#include <stdio.h>
int main(){	
	//girilen say�n�n tek-�ift oldu�unu bulan program
	int a;
	printf("bir sayi giriniz:");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("Girilen sayi cift");
	}
	else{
		printf("tek sayi");
	}
	
}
