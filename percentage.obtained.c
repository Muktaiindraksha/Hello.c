#include <stdio.h> 
 
int main()
{
    int total,p,eng, phy, chem, math, comp; 
    
    printf("Enter marks of five subjects: :- ");
    scanf("%d%d%d%d%d",&eng, &phy, &chem, &math, &comp);
 
    total = eng + phy + chem + math + comp;
    p=total/5*100;
 
    printf("Total marks = %d\n", total);
    printf("percentage is=%d",p);
 
    return 0;
}

