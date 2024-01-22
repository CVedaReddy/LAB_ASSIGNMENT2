#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    ((num & 1 )==1)? printf("number is odd"): printf("the number is even ");
   return 0;

}