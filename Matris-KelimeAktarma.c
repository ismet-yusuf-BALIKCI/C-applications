int main(){
	
	char matris[5][20]={};//5 sat�r 20 s�tunluk bo� matris olu�tur
 	int i=0,j=0;
 	char cumle[100];
 	printf("cumle giriniz:");
 	gets(cumle);
 	int k=0;
 	while(cumle[k]!='\0'){//girilen c�mlenin sonuna kadar her harfi kontrol et
 		if(cumle[k]==' '){//Bo�luk ise bir alt sat�r�n ilk s�tununa ge�(i:sat�r, j:s�tun)
 			i++;
 			j=0;
		}
		else{
			matris[i][j]=cumle[k]; //bo�luk de�ilse harfi matrise aktar
 			j++;	//her harf aktar�l�nca bir sonraki s�tuna ge�
		} 		
 		k++;
 	}
 	printf("Matris:\n");
 	for(i=0;i<5;i++){
 		for(j=0;j<20;j++){
 		
 			printf("%c ",matris[i][j]);
	 	}
	 	printf("\n");
 	}	
	
}
