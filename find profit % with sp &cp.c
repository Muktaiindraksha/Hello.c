#include <stdio.h>
int main() {
	float sp,cp,p;
	printf("enter a price:-");
	scanf("%f %f",&sp,&cp,&p);
	p=sp-cp;
	if (sp>cp)
	printf("Profit percentage:-",p);
	else
	printf("Invalid");
	
	return 0;
}

