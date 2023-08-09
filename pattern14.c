/*      1
        12
        123
        1234
        123
        12
        1
*/
int main()
{
    int i,j;                             
    for(i=1;i<=4;i++)                 
    {
        for(j=1;j<=i;j++)             
        {
           printf("%d",j);     
        }
        printf("\n");
    }
    for(i=3;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}