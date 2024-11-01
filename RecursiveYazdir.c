#include <stdio.h>
//2 farklý yöntemle sayýlarý özyinelemeli olarak yazdýran program:

int sayiYazdir2(int a){	
	printf("%d\n",a);//önce a deðerini yaz
	if(a>1) //a=1 olana kadar devam et
		sayiYazdir2(a-1); //a'yý 1 azaltýp tekrar kendisini çaðýr
}
void sayiYazdir(int a){
	if(a==0)//a=0 ise geri dön (durdurma þartý/bitiþ þartý)
		return;
	printf("%d\n",a);
	sayiYazdir(a-1);//öz yinelemeli fonksiyon-Recursive	
}

int main(){	
	int sayi=5;		
	sayiYazdir(sayi);
	sayiYazdir2(10);		
}
