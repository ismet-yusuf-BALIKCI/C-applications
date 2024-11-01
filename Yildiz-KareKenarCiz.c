/*
Yýldýz kullanarak karenin kenarlarýný çizen program
*/
#include <stdio.h>
int main(){
	
	int n=10;//kenar uzunluðu(kullanýcýdan alýnacak)
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==0||j==0||j==n-1||i==n-1)
				printf("* ");
			else
				printf("  ");	
		}
		printf("\n");		
	}
}
