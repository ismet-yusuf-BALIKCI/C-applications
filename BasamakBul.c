/*
348=>
1.ad�m: bas=348%10=8
2.ad�m: 348/10 =>34

3.ad�m bas=34%10=4
4.ad�m 34/10=>3

5.ad�m bas=3%10=3
6.ad�m 3/10=0

//2.y�ntem(kalan� ��kararak):
1.ad�m: 348%10=8
2.ad�m: 348-8=>340
3.ad�m: 340/10=>34
4.ad�m: 34%10=>4
5.ad�m: 34-4=>30
6.ad�m: 30/10=>3
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
