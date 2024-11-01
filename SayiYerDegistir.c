int main(){
	
	int A,B,gecici;
	printf("A giriniz:");
	scanf("%d",&A);
	printf("B giriniz:");
	scanf("%d",&B);
	
	gecici=A;
	A=B;
	B=gecici;
	
	printf("A:%d \n",A);
	printf("B:%d",B);
}
