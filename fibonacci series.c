#include<stdio.h>
int main() 
{       /*0,1,1,2,3,5,8...n*/
    int terms,i,f0,f1,f2;
    printf("Enter the number of terms of series required\n");
    scanf("%d",&terms);
    f0=0;
    f1=1;
    printf("the series is :");
    printf ("%d\t%d\t",f0,f1);
    for(i=1;i<=(terms-2);i++)
    {
        f2=f0+f1;
        printf("%d\t",f2);
        f0=f1;
        f1=f2;
    }
    return 0;
}