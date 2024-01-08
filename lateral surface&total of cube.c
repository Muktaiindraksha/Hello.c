#include <stdio.h> 
int main() {
	int l,t,side;
	printf("enter no of sides:--");
	scanf("%d %d",&side);
	l=4*side*side;
	t=6*side*side;
	printf("the lateral surface area of cube is:%d \n",l);
	printf("the total surface area of cube is:%d \n",t);
	
	return 0;
	
}
