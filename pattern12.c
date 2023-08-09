/*      A B C D E
        A B C D
        A B C
        A B
        A
*/
int main()
{
    int i,j;                                   // OR
    for(i=1;i<=5;i++)                 // for (i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)             // for(j=1;j<=i;j++)
        {
           printf("%c ",(70-j));       // printf("%c ",(64+j));
        }
        printf("\n");
    }
    return 0;
}