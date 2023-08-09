/*   * * * * * * * * *
       * * * * * * *
         * * * * *
           * * *
             * 
*/
int main()
{
    int i,j,space=1;
    for (i=5;i>=1;i--)
    {   
        for(space=1;space<=(5-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}