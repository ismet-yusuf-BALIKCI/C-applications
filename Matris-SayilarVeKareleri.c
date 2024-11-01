//1-10 arasý sayýlar ve karelerini matrise yerleþtiren program
int main(){
	
	int A[10][2];
	int i;
	for(i=0;i<10;i++){
		A[i][0]=i+1; //ilk sütuna sayý yaz
		A[i][1]=(i+1)*(i+1); //ikinci sütuna karesini yaz
	}
	int j;
	printf("\A Matrisi:\n");
	for(i=0;i<10;i++){//satýr sayýsý
		for(j=0;j<2;j++){//sütun sayýsý
			printf("%d ",A[i][j]);		
		}
		printf("\n");
	}
	
}
