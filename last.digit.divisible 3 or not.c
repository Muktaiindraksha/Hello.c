#include <stdio.h>
int main() {
	int n,p;
	printf("enter a number:--");
	scanf("%d",&n);
	p=n%10;
	if (p%3==0)
	printf("Divisible");
	else
	printf("Not Divisible");
	return 0;
}
