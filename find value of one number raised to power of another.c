#include<stdio.h>
int main()
{
    int x,y,i;
    long int power=1;
    printf("enter two nubers :\n");
    scanf("%d%d",&x,&y);
    i=1;
    while(i<=y)
    {
        power=power*x;
        i++;
    }
    printf("%d to the power of %d = %ld",x,y,power);
    return 0;
}