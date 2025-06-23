#include <stdio.h>
int main()
{
    int min, max, i;
    int n[5];

    printf("Enter 5 Number : ");
  
    for (i = 0; 5 > i ; i++)
    {
        scanf("%d", &n[i]);
    };

   /* for (i = 0; 5 > i; i++)
    {
        printf("Number is %d\n",n[i]);
    }; */
    min=n[0];
    max=n[0];

    for (i = 0; i < 5; i++)
    {
        if(min>n[i])
        {
            min=n[i];
        }
        if(max<n[i])
        {
            max=n[i];
        }
    }
    
    printf("Minimum is : %d",min);
    printf("\nMaximum is : %d",max);
    

    return 0;
}