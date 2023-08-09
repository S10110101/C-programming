/*      2 3 4 5 6 7
        3 4 5 6 7
        4 5 6 7 
        5 6 7
        6 7
        7
*/
int main()
{
    for(int i=2;i<=7;i++)
    {
        for (int j=i;j<=7;j++)
       { 
           printf("%d ",j);
       }
           printf("\n");
    }
}