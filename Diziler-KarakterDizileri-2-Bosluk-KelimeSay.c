main(){
	char cumle[100];
	printf("bir cumle giriniz:");
	gets(cumle);
	
	int i=0;
	int boslukSay=0;
	for(i=0;cumle[i]!='\0';i++){
		if(cumle[i]==' '){
			boslukSay++;
		}
	}
	printf("bosluk sayisi=%d \nKelime sayisi=%d",boslukSay,boslukSay+1);
	
	
	//uzunluk bulmak i�in while d�ng�s�:
	//i=0; 
//	while(cumle[i]!='\0'){
//		i++;
//	}
		
	//uzunluk bulmak i�in for d�ng�s�:	
	//for(i=0;cumle[i]!='\0';i++);
		
	//printf("uzunluk=%d",i);
}
