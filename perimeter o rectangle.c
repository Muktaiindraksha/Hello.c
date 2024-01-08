#include <stdio.h> 
#include <math.h> 
int main() {
	float l,w,p;
	printf("enter length of rectangle");
	scanf("%f",&l);
	printf("enter width o rectangle"); 
	scanf("%f",w);
	p=2*(l+w);
	printf("perimeter of rectangle= %f units",p);
	
	return 0;
	
}
