#include <stdio.h>
//Fibonacci serisi
int main(){
	
	int a=0,b=1,c,N,i;
	printf("N degerini giriniz:");
	scanf("%d",&N);
	c=a+b;
	
	printf("%d %d ",a,b);//Serinin baþlangýç deðerlerini yazdýr
	
	for(i=0;i<N-2;i++){
		printf("%d ",c);
		//a ve b deðerlerini güncelleyip yeni c deðerini hesapla:
		a=b;
		b=c;
		c=a+b;
	}
	
}
