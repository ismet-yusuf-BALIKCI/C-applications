
int main(){
	
	srand(time(0));//rastgele say� olu�turmak i�in
	int sayi;
	int i,j;
	int A[4][4];
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			A[i][j]=rand()%100; //0-100 aras� rastgele say� olu�turup matrise aktar			
		}
	}
	printf("\A Matrisi:\n");
	for(i=0;i<4;i++){//sat�r say�s�
		for(j=0;j<4;j++){//s�tun say�s�
			printf("%d ",A[i][j]);		
		}
		printf("\n");
	}
	
}
