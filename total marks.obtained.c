#include <stdio.h>
 
int main()
{
    int total,eng, phy, chem, math, comp; 
    
    printf("Enter marks of five subjects: :- ");
    scanf("%d%d%d%d%d",&eng, &phy, &chem, &math, &comp);
 
    total = eng + phy + chem + math + comp;
 
    printf("Total marks = %d\n", total);
 
    return 0;
}
