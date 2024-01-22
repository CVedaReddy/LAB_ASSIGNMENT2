#include<stdio.h>

int main()
{
    int a,b,c,max;
    printf("\n Enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
/*max=(a>b)?(a>c ? a: c):(b>c ? b:c); */
max=((a>b)&&(a>c))? a:((b>c)&&(b>a))? b:c;
printf("\n max=%d",max );
return 0;


}