// 1/1!+2/2!+3/3!+...
#include<stdio.h>
int main()
{
    int i ,j;
    float fact , sum=0.0;
    i=1;
    while(i<=7)
    {
        fact=1.0;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+i/fact;
        i++;
    }
    printf("\n sum of series =%f",sum);
    return 0;
}