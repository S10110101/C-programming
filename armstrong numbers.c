// abc = a^3 + b^3 + c^3
#include<stdio.h>
int main ()
{
    int i,a,b,c;
    printf("Armstrong numbers between 1 and 500 are\n");
    i=1;
    while(i<=500)                           //371
    {
        a=i%10; //extract last digit        //1
        b=i%100;                            //71
        b=(b-a)/10; //extract second digit  //71-1/10=7
        c=i/100;  //extract first digit     //3
        if((a*a*a)+(b*b*b)+(c*c*c)==i) 
        { 
            printf("%d\n",i);  //371
        }
        i++;
    }
    return 0;
}