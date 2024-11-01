
int main(){
	
	srand(time(0));//rastgele sayı oluşturmak için
	int sayi;
	int i,j;
	int A[4][4];
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			A[i][j]=rand()%100; //0-100 arası rastgele sayı oluşturup matrise aktar			
		}
	}
	printf("\A Matrisi:\n");
	for(i=0;i<4;i++){//satır sayısı
		for(j=0;j<4;j++){//sütun sayısı
			printf("%d ",A[i][j]);		
		}
		printf("\n");
	}
	
}
