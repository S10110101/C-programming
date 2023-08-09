#include<stdio.h>
int main ()
{
    int i , num, p;
    printf("enter the no. whose table is desired");
    scanf("%d",&num);
    printf("the required table is below:\n");
    for(i=1;i<=10;i++)
    {
        p=num*i;
        printf("%d * %d = %d\n",num,i,p);
    }
    return 0;
    
}