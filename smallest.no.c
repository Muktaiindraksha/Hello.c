#include <stdio.h>
#include <math.h>
int main()
{
int num1, num2;
printf("\nEnter the number 1 : ");
scanf("%d",&num1);
printf("\nEnter the number 2 : ");
scanf("%d",&num2);
printf("\nSmallest Number : \n%d ", num2>num1 ? num1:num2);
return 0;
}
