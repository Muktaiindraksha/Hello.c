#include <stdio.h>
int main(){
	int p,r,t,A;
	printf("enter a number:--");
	scanf("%d %d %d",&p,&r,&t,&A);
	A=p*r*t%100;
	printf("the rate of interest is:%d",A);
	
	return 0;
	
}
