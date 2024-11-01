int degistir(int a){ //call by value(Deðer ile çaðýrma)
	a=10;		
}
int degistirP(int *y){ //Call by reference(Referans adresi(pointer) ile çaðýrma)
	*y=20;
}

int main(){	
	int a=5;	
	printf("a:%d \n",a);//a:5
	degistir(a);
	printf("a:%d \n",a);//a:5
	
	int *p=&a;//p pointeri a deðiþkeninin adresini gösteriyor
	*p=6;//a degeri degistir
	printf("a:%d \n",a);//a:6
	degistirP(p); //a adresini gönder
	printf("a:%d \n",a);//a:20
	
}
