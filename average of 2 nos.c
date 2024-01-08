#include <stdio.h>
int main() {
	int num,num1;
	float avg;
	printf("enter first number");
	scanf("%d",&num);
	printf("enter second number");
	scanf("%d",&num1);
	avg=(float)(num+num1)/2;
	printf("average of %d and %d is:%.2f",num,num1,avg);
	
	return 0;
}
