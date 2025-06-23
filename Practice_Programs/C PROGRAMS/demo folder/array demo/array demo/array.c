#include<stdio.h>

int main()
{
    int i,j,k,n;
    
    printf("Enter no. for pattern : ");
    scanf("%d",&n);
    
    for(i=n;n>=i;i--)
    {
        for(k=1;k<=5;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}

