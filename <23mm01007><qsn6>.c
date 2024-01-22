#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    (num % 2 !=0 && num >=100 && num <=200)? printf("true \n"): printf("false \n");
    return 0;

}