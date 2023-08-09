#include<stdio.h>
int main()
{
    int f0=0,f1=1,f2,sum=1,count=2;
    printf("the required fibonacci series is:\n");
    printf("%d\t%d\t",f0,f1);   // 0 1
    while(1)
    {
        f2=f0+f1;             //=0+1
        if(f2>100)
        {
            break;
        }
        printf("%d\t",f2);    //1
        f0=f1;                  //f0=1
        f1=f2;                //f1=1
        sum=sum+f2;           //=1+1=2
        count++;                //3
    }
    printf("\n sum of the series is %d",sum);
    printf("\n total count of fibonacci numbers is %d",count);
    return 0;
}