#include <stdio.h>
//Fibonacci serisi
int main(){
	
	int a=0,b=1,c,N,i;
	printf("N degerini giriniz:");
	scanf("%d",&N);
	c=a+b;
	
	printf("%d %d ",a,b);//Serinin ba�lang�� de�erlerini yazd�r
	
	for(i=0;i<N-2;i++){
		printf("%d ",c);
		//a ve b de�erlerini g�ncelleyip yeni c de�erini hesapla:
		a=b;
		b=c;
		c=a+b;
	}
	
}
