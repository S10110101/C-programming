#include<stdio.h>
int main()
{
    int n,a,rev=0;
    printf("Enter the number \n");
    scanf("%d",&n);

    while(n!=0)
    {
        a=n%10;
        n=n/10;
        rev=(rev*10)+a;
    }
    printf("Reverse of %d is %d \n",n,rev);
    return 0;
}