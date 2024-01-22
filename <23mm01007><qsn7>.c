#include<stdio.h>
int main()
{
    int cp, tip, tax,total ;
    printf(" Enter meal price , tip percent and tax percent:");
    scanf("%d %d %d ", &cp, &tip, &tax);
    total = cp + (( tip * cp )/ 100)+((tax * cp) / 100);
    printf("the total cost of meal : %d", total);
    return 0;
}