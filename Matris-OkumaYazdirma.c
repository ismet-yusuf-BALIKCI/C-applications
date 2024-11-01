int main(){
	
	int A[2][3]={{1,2,3},{3,4,5} }; //Matris deðeri baþlangýçta verilebilir
	
	int i,j;
	//Matris deðerleri kullanýcýdan alýnabilir:
	for(i=0;i<2;i++){//satýr sayýsý
		for(j=0;j<3;j++){//sütun sayýsý
			printf("Matrisin %d.satir %d.sutun giriniz:",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
		
	}
	//1.satýr 1.sutun:
	//1.satýr 2.sutun
	//1.satýr 3.sutun
	//2.satýr 1.sutun:
	//2.satýr 2.sutun
	//2.satýr 3.sutun

	printf("\nGirilen Matris:\n");
	for(i=0;i<2;i++){//satýr sayýsý
		for(j=0;j<3;j++){//sütun sayýsý
			printf("%d ",A[i][j]);		
		}
		printf("\n");
	}
	
	
}
