#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=1; j<=n ;j++)
    {
        for(int i=1; i<=n ;i++)
        {
            if( j==1 || j==n || i==1 || i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}