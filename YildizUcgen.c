#include <stdio.h>
int main(){
	/* Y�ld�z ile ��gen �ekli olu�turma
	*
	* *
	* * *
	* * * *
	* * * * *
	*/
	
	int n,i,j;  
    printf("Satir sayisini giriniz:");  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    {  
        for(j=0;j<=i;j++)  
        {  
            printf("* ");  
        }  
        printf("\n");  
    }  
	
}
