#include<stdio.h> 
int main ()
{
	char ch;
	printf("enter a char");
	scanf("%c",&ch);
	if(ch>='0' && ch<='9') 
	
	{ 
	   printf("char is digit",ch);
	}
	else
	{ 
	   printf("char is not digit",ch);
	}
	return 0;
}
