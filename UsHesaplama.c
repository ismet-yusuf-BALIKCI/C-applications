#include <stdio.h>
int main(){
	
	int taban=2,us=3,sonuc=1;
	//Not:Taban ve üs degerleri kullanýcýdan alýnmalý
	int i;
	for(i=0;i<us;i++){
		sonuc=sonuc*taban;
	}
	printf("%d^%d=%d",taban,us,sonuc);
	
}

