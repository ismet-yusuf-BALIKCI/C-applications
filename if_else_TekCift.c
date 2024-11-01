#include <stdio.h>
int main(){	
	//girilen sayýnýn tek-çift olduðunu bulan program
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
