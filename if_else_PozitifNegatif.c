#include <stdio.h>
int main(){	
 	
 	//Girilen say�n�n pozitif-negatif oldu�unu bulmak
 	
 	int a;
 	printf("Bir sayi giriniz:");
 	scanf("%d",&a);
 	
 	 	
 	if(a>0){
 		printf("Pozitif");
	 }	 
 	else if(a<0){
 		printf("Negatif");
	 }
	else {
		printf("Sifir");
	}
	 
 }
