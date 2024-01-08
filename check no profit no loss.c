#include <stdio.h>
int main() {
	int sp,cp;
	printf("enter a number");
	scanf("%d %d",&sp,&cp);
	if (sp>cp)
	printf("profit");
	else if (cp>sp)
	printf("Loss");
	else
	printf("NO PROFIT NO LOSS");
}
