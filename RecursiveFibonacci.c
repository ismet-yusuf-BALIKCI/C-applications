
//Recursive(Özyinelemeli) fibonacci serisi:
int fib(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	
	return fib(n-1)+fib(n-2);		
}

//Döngü ile fibonacci serisi:
void fibonacciSerisi(int n){
	int a=0,b=1,c,i;
	for(i=0;i<=n;i++){
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;		
	}
}

int main(){
	printf("Recursive fibonacci sonucu:%d\n", fib(7));
	printf("Dongusel fibonacci:");
	fibonacciSerisi(7);
}

