
int main(){
	
	char kelime[50];
	printf("bir metin giriniz:");
	gets(kelime);
	
	int i;
	//1.y�ntem: ASCII kodu
//	for(i=0;kelime[i]!='\0';i++){
//		
//		if(kelime[i]>=48 && kelime[i]<=57){//0-9 aras�
//			printf("%c:Rakam \n",kelime[i]);			
//		}
//		else if(kelime[i]>=65 && kelime[i]<=90){
//			printf("%c:BUYUK HARF \n",kelime[i]);
//		}
//		else if(kelime[i]>=97&& kelime[i]<=122){
//			printf("%c:kucuk harf \n",kelime[i]);
//		}
//		else{
//			printf("%c:sembol \n",kelime[i]);
//		}		
//	}
	//2.y�ntem:karakter kontrol�
	for(i=0;kelime[i]!='\0';i++){
	
		if(kelime[i]>='0' && kelime[i]<='9'){//0-9 aras�
			printf("%c:Rakam \n",kelime[i]);			
		}
		else if(kelime[i]>='A' && kelime[i]<='Z'){//A-Z aras�
			printf("%c:BUYUK HARF \n",kelime[i]);
		}
		else if(kelime[i]>='a'&& kelime[i]<='z'){//a-z aras�
			printf("%c:kucuk harf \n",kelime[i]);
		}
		else{
			printf("%c:sembol \n",kelime[i]);
		}		
	}
	
	
}



