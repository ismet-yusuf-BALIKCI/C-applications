#include <stdio.h>
//2 farkl� y�ntemle say�lar� �zyinelemeli olarak yazd�ran program:

int sayiYazdir2(int a){	
	printf("%d\n",a);//�nce a de�erini yaz
	if(a>1) //a=1 olana kadar devam et
		sayiYazdir2(a-1); //a'y� 1 azalt�p tekrar kendisini �a��r
}
void sayiYazdir(int a){
	if(a==0)//a=0 ise geri d�n (durdurma �art�/biti� �art�)
		return;
	printf("%d\n",a);
	sayiYazdir(a-1);//�z yinelemeli fonksiyon-Recursive	
}

int main(){	
	int sayi=5;		
	sayiYazdir(sayi);
	sayiYazdir2(10);		
}
