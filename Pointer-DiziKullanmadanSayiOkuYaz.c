//Dizi yerine pointer kullanarak 5 sayý okuyup yazdýrma:
int main(){
		
	int *p=(int *)malloc(sizeof(int)*5);// 5 elemanlý pointer dizi tanýmlanýyor
	
	int i;
	for(i=0;i<5;i++){
		printf("%d.sayi:",i+1);				
		scanf("%d",p+i);//girilen sayý p pointera aktarýlýyor.p0,p1,p2.. adreslerine 
	}
	
	for(i=0;i<5;i++){
		printf("%d ",*(p+i));//pointer deðerleri yazdýrýlýyor
	}
		
}
