//wap to find fibonacii series of n term
#include <stdio.h>
int main(){
	int n,a=0,b=0,c,i;
	printf("enter the number:");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
			printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}

	return 0;
}