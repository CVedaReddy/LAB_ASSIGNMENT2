#include<stdio.h>
#include<math.h>
int main()
{
    int no_days, years, months, weeks, days;
    printf("\n Enter the number of days");
    scanf("%d", &no_days);
    years= no_days / 365;
    months= (no_days % 365)/ 30;
    weeks= ((no_days % 365 )-(months*30)) /7;
    days= ((no_days % 365 )-(months*30)-(weeks*7));
    printf("years:%d",years);
    printf("\n months= %d",months);
    printf("\n weeks=%d", weeks);
    printf("\n days=%d", days);
    return 0;


    
}