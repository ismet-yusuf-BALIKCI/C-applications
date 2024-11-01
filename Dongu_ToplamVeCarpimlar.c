
int main(){
	
	int i,toplam=0;	
	//1-10 arasý toplam:
	for(i=1;i<=10;i++){		
		toplam=toplam+i;		
		//printf("i=%d ",i);
		//printf("toplam=%d\n",toplam);
	}
	printf("1-10 arasi Toplam=%d",toplam);
	printf("\n");
	//0-100 arasi çift toplam,
	//tek sayýlarýn çarpýmý
	toplam=0;
	double carpim=1;
	for(i=0;i<=100;i++){
		if(i%2==0){//çift sayý ise
			toplam+=i;	
		}
		else{//çift deðilse
			carpim*=i;
		}		
	}
	printf("Toplam=%d Carpim=%f",toplam,carpim);
//	toplam=0;
//	1 => toplam=toplam+1 =>1
//	2 => toplam=toplam+2 =>3
//	3 => toplam=toplam+3 =>6
//	4 => toplam=toplam+4 =>10
//	5
	
}
