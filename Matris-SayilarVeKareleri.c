//1-10 aras� say�lar ve karelerini matrise yerle�tiren program
int main(){
	
	int A[10][2];
	int i;
	for(i=0;i<10;i++){
		A[i][0]=i+1; //ilk s�tuna say� yaz
		A[i][1]=(i+1)*(i+1); //ikinci s�tuna karesini yaz
	}
	int j;
	printf("\A Matrisi:\n");
	for(i=0;i<10;i++){//sat�r say�s�
		for(j=0;j<2;j++){//s�tun say�s�
			printf("%d ",A[i][j]);		
		}
		printf("\n");
	}
	
}
