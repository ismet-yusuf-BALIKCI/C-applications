//2 Boyutlu Diziler-MATRÝS okuma-Yazdirma
int main(){
		
	int matris[2][3];
	int i,j;
	for(i=0;i<2;i++){//satýr
		for(j=0;j<3;j++){//sütun
			printf("matris[%d][%d]:",i,j);
			scanf("%d",&matris[i][j]);					
		}		
	}
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("matris[%d][%d]:%d ",i,j,matris[i][j]);					
		}
		printf("\n");		
	}
	
	
}
