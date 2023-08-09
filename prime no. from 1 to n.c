#include<stdio.h>
int main()
{
    int num,i,n;
    printf("enter the range of prime no. from 1 to n\n");
    scanf("%d",&n);
    printf("prime numbers from 1 to %d are :",n);
    for(num=1;num<=n;num++)
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
            if(i==num)
            {
                printf("%d\t",num);
            }
    }
    return 0;
}