int main(){
	
	int A[2][3]={{1,2,3},{3,4,5} }; //Matris de�eri ba�lang��ta verilebilir
	
	int i,j;
	//Matris de�erleri kullan�c�dan al�nabilir:
	for(i=0;i<2;i++){//sat�r say�s�
		for(j=0;j<3;j++){//s�tun say�s�
			printf("Matrisin %d.satir %d.sutun giriniz:",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
		
	}
	//1.sat�r 1.sutun:
	//1.sat�r 2.sutun
	//1.sat�r 3.sutun
	//2.sat�r 1.sutun:
	//2.sat�r 2.sutun
	//2.sat�r 3.sutun

	printf("\nGirilen Matris:\n");
	for(i=0;i<2;i++){//sat�r say�s�
		for(j=0;j<3;j++){//s�tun say�s�
			printf("%d ",A[i][j]);		
		}
		printf("\n");
	}
	
	
}
