#include <stdio.h>
int main()
{
    int num , i ,sum=0;
    float avg;
    printf("Enter any 10 numbers");
    i=0;
    while (i<=9)
    {
        scanf("%d",&num);
        sum=sum+num;
        i=i+1;
    }
    printf("the sum of 10 numbers is %d\n",sum);
    avg=sum/10;
    printf("avg to 10 numbers is %f",avg);
    return 0;
}