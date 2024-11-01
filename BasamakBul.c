/*
348=>
1.adým: bas=348%10=8
2.adým: 348/10 =>34

3.adým bas=34%10=4
4.adým 34/10=>3

5.adým bas=3%10=3
6.adým 3/10=0

//2.yöntem(kalaný çýkararak):
1.adým: 348%10=8
2.adým: 348-8=>340
3.adým: 340/10=>34
4.adým: 34%10=>4
5.adým: 34-4=>30
6.adým: 30/10=>3
*/
#include <stdio.h>
int main(){
	
	int sayi,i,basamak;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayi>0){
		basamak=sayi%10;
		//sayi=sayi-basamak;
		sayi=sayi/10;
		printf("%d\n",basamak);		
	}
}
