//2 Boyutlu Diziler-MATR�S okuma-Yazdirma
int main(){
		
	int matris[2][3];
	int i,j;
	for(i=0;i<2;i++){//sat�r
		for(j=0;j<3;j++){//s�tun
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
