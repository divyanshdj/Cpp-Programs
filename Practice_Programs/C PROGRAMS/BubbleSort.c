#include <stdio.h>
int main()
{
    int n[50];
    int i, j, n1, temp;

    printf("Enter Array Size : ");
    scanf("%d", &n1);

    printf("\nEnter %d Number For Array :- ", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &n[i]);
    }

    for(i=0 ; i < n1 ; i++)
    {
        for(j=i+1 ; j < n1 ; j++)
        {
            if (n[i]>n[j])
            {
                temp=n[i];
                n[i]=n[j];
                n[j]=temp;
            }
            
        }
    }

    printf("\nArray Elements in Ascending Order : ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", n[i]);
    }

     for(i=0 ; i < n1 ; i++)
    {
        for(j=i+1 ; j < n1 ; j++)
        {
            if (n[i]<n[j])
            {
                temp=n[i];
                n[i]=n[j];
                n[j]=temp;
            }
            
        }
    }

    printf("\nArray Elements in Descending Order \n: ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", n[i]);
    }

    return 0;
}