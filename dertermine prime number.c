#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number");   //13
    scanf("%d",&num);
    for(i=2;i<=num-1;i++) //i=2;i<=12;i++
    {
        if(num%i==0)      //13%i!=0
        {
            printf("Number is not prime\n");
            break;
        }
    }
    if(i==num)    //13=13
    {
        printf("Number is a prime");
    }
    return 0;
}