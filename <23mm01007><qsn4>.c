#include<stdio.h>
int main()
{
    int year,x ;
    printf(" enter the year:");
    scanf("%d",&year);
   if   ((year % 400) == 0 )
   {
    printf("the year=%d is leap year",year);   
   }
    else if (year % 100 == 0 )
    {
    printf("The year= %d is not a leap year", year);
    }
    else if ( year % 4 == 0 )
    {   
    printf("The year = %d is a leap year", year);
    }
    else
    {
    printf(" the year= %d is not a leap year", year);
    }
    return 0;
}