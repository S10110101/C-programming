#include<stdio.h>
int main()
{
    int n,d,rev=0,num;
    printf("enter the number\n");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("reverse number is %d \n",rev);
    if(rev==num)
        printf("number is palindrome");
    else
        printf("number is not palindrome");
    return 0;
}